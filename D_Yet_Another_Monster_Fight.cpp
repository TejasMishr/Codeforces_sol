//----------------> JAI SHREE RAM <------------- //
#include <bits/stdc++.h>
using namespace std;
// Code Shortners
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define pb push_back
#define mpp make_ pair
#define len(s) (int)s.size()
#define print(x) cout << x << endl;
#define REP(i, a, b) for (int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define fast                      \
    ios_bfse::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007;

void solve(){
    ll n;
    cin >> n;

    vector<ll> a(n);

    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll ans = 0;
    vector<ll> left(n, 0);
    ll mx = a[0], k = 1;
    ll r = n - 2;

    for (int i = 1; i < n; i++)
    {
        left[i] = mx + k + r--;
        if (mx + k < a[i]){
            mx = a[i];
            k = 1;
        }
        else k++;
    }

    vector<ll> right(n, 0);
    r = n - 2;
    mx = a[n - 1], k = 1;
    for (int i = n - 2; i >= 0; i--){
        right[i] = mx + k + r--;
        if (mx + k < a[i]){
            mx = a[i];
            k = 1;
        }
        else k++;
    }

    ans = 1e19;
    REP(i,0,n) ans = min(ans, max({left[i], a[i], right[i]}));
    

    cout << ans << "\n";
}

int main()
{
    ll t = 1;
    // cin>>t;

    while (t--)
        solve();

    return 0;
}