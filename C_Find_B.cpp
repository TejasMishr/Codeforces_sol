#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define REP(i, a, b) for (ll i = a; i < b; i++)
#define print(s) cout << s << endl

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;
        vi a(n, 0);
        REP(i, 0, n) cin >> a[i];
        vi sum(n + 1, 0);
        vi onn(n + 1, 0);
        REP(i, 1, n + 1){sum[i] = sum[i - 1] + a[i - 1];}
        REP(i, 1, n + 1){onn[i] = onn[i - 1]; if(a[i - 1] == 1) onn[i]++;}

        while (q--) {
            int x, y;
            cin >> x >> y;
            int r = y - x + 1;
            if (x == y) {
                print("NO");
                continue;
            }
            ll tot = sum[y] - sum[x - 1];
            ll on = onn[y] - onn[x - 1];

            print(((tot < 1ll * on * 2 + r - on) ? "NO" : "YES"));
                
        }
    }

    return 0;
}
