#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 6e5 + 10, mod = 1e9 + 7, Mod = 998244353, mod1 = 3, mod2 = 332748118;
const int M = 2e5;
int cnt[N];
int rs[N], c[N], d[N];
int F[N], G[N], id[N];
int r[N], K, l;
inline int ksm(int x, int y){
	int ans = 1;
	while(y){
		if(y & 1) ans = (1LL * ans * x) % Mod;
		x = (1LL * x * x) % Mod; y >>= 1;
	}
	return ans;
}
inline void NTT(int *v, int tp){
	for(int i = 1; i < K; ++ i){
		if(r[i] > i) swap(v[r[i]], v[i]);
	}
	for(int i = 1; i < K; i <<= 1){
		int w1 = ksm(tp, (Mod - 1) / (i << 1));
		for(int R = i << 1, j = 0; j < K; j += R){
			int w = 1;
			for(int k = 0; k < i; ++ k){
				int x = v[j + k], y = (1LL * w * v[i + j + k]) % Mod;
				v[j + k] = (x + y) % Mod;
				v[i + j + k] = (x - y + Mod) % Mod;
				w = (1LL * w * w1) % Mod;
			}
		}
	}
}
inline void pre(int al){
	K = 1, l = 0;
	while(K <= al) K <<= 1, ++ l;
	for(int i = 1; i < K; ++ i) r[i] = ((r[i >> 1] >> 1) | (i & 1) << (l - 1));
}
inline void Mul(int *a, int *b){
	NTT(a, mod1); if(a != b) NTT(b, mod1);
	for(int i = 0; i < K; ++ i) a[i] = (1LL * a[i] * b[i]) % Mod;
	NTT(a, mod2); int inv = ksm(K, Mod - 2);
	for(int i = 0; i < K; ++ i) a[i] = (1LL * a[i] * inv) % Mod;
}
signed main(){
	int l, t, n;
	scanf("%lld%lld%lld", &l, &t, &n);
	for(int x, i = 1; i <= n; ++ i){
		scanf("%lld", &x);
		id[x] = F[x] = 1;
	}
	pre(M << 1); Mul(F, F);
	int ans = 0, inv2 = (mod + 1) >> 1;
	for(int i = 3; i < K; ++ i){
		if(i % 2 == 0) F[i] -= (id[i / 2]);
		F[i] = (1LL * F[i] * inv2) % mod; //因为x + y = y + x，会重复计算一遍，所以要除2 
		cnt[i] = F[i];
	}
	memset(F, 0, sizeof(F));
	for(int i = 0; i <= M; ++ i){
		F[i] = id[i]; G[i] = id[M - i];
	}
	pre(M << 1); Mul(F, G);
	for(int i = 0; i < M; ++ i){
		int v = (M - i); //x - y的值,因为不考虑x = y(此时对应M)，所以x - y 不等于 y - x，不用除2
		cnt[v] = (cnt[v] + F[i]) % mod;
	}
	for(int i = 1; i <= M; ++ i){
		for(int j = i; j <= M; j += i){
			c[i] += id[j];
		}
	}
	for(int i = M; i; -- i){
		d[i] = (1LL * c[i] * (c[i] - 1)) % mod;
		d[i] = (1LL * d[i] * inv2) % mod;
		for(int j = i + i; j <= M; j += i){
			d[i] = (d[i] - d[j] + mod) % mod;
		}
		cnt[i] = (cnt[i] - d[i] + mod) % mod;
	}
	memset(c, 0, sizeof(c));
	for(int T = 0; T <= 17; ++ T){//分组
		int x = (1 << T), y = (1 << (T + 1));
		for(int i = 1; i <= M; ++ i){
			for(int j = i; j <= M; j += i){
				if(j % x == 0 && j % y != 0) c[i] += id[j];
			}
		}
		for(int i = M; i; -- i){
			d[i] = (1LL * c[i] * (c[i] - 1)) % mod;
			d[i] = (1LL * d[i] * inv2) % mod;
			for(int j = i + i; j <= M; j += i){
				d[i] = (d[i] - d[j] + mod) % mod;
			}
			int now = ((1LL * t * i) / (2LL * l));
			now = (now + 1) / 2;//统计奇数倍个数
            now %= mod;
			now = (1LL * now * d[i]) % mod;
			ans = (ans - now + mod) % mod;
		}
		for(int i = 1; i <= M; ++ i) c[i] = 0;
	}
	for(int i = 1; i < N; ++ i){
		int now = ((1LL * t * i) / (2LL * l)) % mod;
		now = (1LL * now * cnt[i]) % mod;
		ans = (ans + now) % mod;
	}
	printf("%lld", ans);
	return 0;
} 