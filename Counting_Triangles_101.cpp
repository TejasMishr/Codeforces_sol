// +########################################################################################+
#include<bits/stdc++.h>
using namespace std;
// Code Shortners
#define ub upper_bound
#define lb lower_bound
#define ll long long
#define lli long long int
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vll vector<ll>
#define vvi vector<vi>
#define vvc vector<vector<char>>
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define pii pair<int,int>
#define mll map<ll,ll>
#define pll pair<ll, ll>
#define F first
#define S second
#define pb push_back
#define ppb pop_back
#define pf  push_front
#define ppf pop_front
#define mpair make_pair
#define len(s) (int)s.size()
#define inp(i,a,b,vec) for(ll i = a; i < b; i++) cin>>vec[i];
#define print(x) cout<<x<<endl;
#define REP(i,a,b) for(ll i = a; i < b; i++)
#define REPE(i,a,b) for(ll i = a; i <= b; i++)
#define nl cout<<endl;
#define autoprint(a) for(auto i:a) cout<<i<<nl;
#define trav(x,a) for(auto& x : a)
//  Container bounds
#define rall(c)rbegin(c),rend(c)
#define all(a) (a).begin(), (a).end()
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define SUM(v) accumulate(all(v),0)
#define UNIQUE(x) x.erase(unique(x.begin(), x.end()), x.end())
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define si set<int>
#define sc set<char>
#define sst set<string>
#define Si stack<int>
#define Sc stack<char>
#define Sst stack<string>
 #define readll(n) ll n; cin >> n
#define readS(str) string str;  cin >> str
const ll mod=1000000007;
#define MXN 2000005

//---------------------------------------------------------------------------------------------------------------------
int sumvector(vi &arr){
int x = 0;
REP(i,0,arr.size()) x += arr[i];
return x;
}
ll gcd(ll a, ll b) {
return a == 0 ? b : gcd(b%a, a);
}
ll lcm(ll a, ll b) {
return (a/gcd(a, b))*b;
}
//---------------------------------------------------------------------------------------------------------------------



ll pre[MXN];
ll tmp[MXN];

// Fast exponentiation modulo mod
ll pw(ll a, ll b) {
    a %= mod;
    ll res = 1;
    while (b) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

// Calculate n choose k modulo mod
ll chk(ll n, ll k) {
    if (min(n, k) < 0 || k > n) return 0;
    return (((tmp[n] * pw(tmp[n - k], mod - 2)) % mod) * pw(tmp[k], mod - 2)) % mod;
}
void sol(){
  ll n, m;
    cin >> n >> m;

    // Precompute binomial coefficients
    for (ll i = 0; i <= m; i++) {
        pre[i] = (i ? pre[i-1] : 0);
        pre[i] = (pre[i] + chk(i, n - 2)) % mod;
    }

    ll res = 0;
    REPE(i,2,m) {
        ll x = (i << 1) - 2;  
        ll cnt = i - 1;
        if (x > m) {
            ll left = x - m; 
            
            res = (res + ((min(left, cnt) * chk(m - i, n - 2)) % mod)) % mod;
            x -= min(left, cnt);  
            cnt -= min(left, cnt); 
        }

        if (!cnt) continue;  

        
        res = (res + ((pre[x - i] - pre[x - i - cnt]) % mod + mod) % mod) % mod;
    }

    print(res);
}
int main(){
  fast;
  ll t=1;
  cin>>t;
    tmp[0] = 1;
    // REPE(i,1,MXN)  tmp[i] = (tmp[i -1]) % mod;
    REP(i, 1, MXN)  tmp[i] = (tmp[i -1] * i) % mod;

  while(t--){
      sol();
  }
  return 0;
}