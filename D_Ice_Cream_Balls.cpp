// Header Files and namespaces
#include<bits/stdc++.h>
using namespace std;
// Code Shortners
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define pb push_back
#define mp make_ pair
#define len(s) (int)s.size()
#define print(x) cout<<x<<'\n'
#define REP(i,a,b) for ( int i = a; i< b; i++)
#define all(a) (a). begin(), (a).end()
#define fast ios_bfse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
const long long mod = 998244353;

void solve()
{
    int n;
    cin >> n;
    int x = (1ll + sqrtl(1ll + 8ll * n)) / 2ll;
    int r = n - x * (x - 1) / 2ll;
    cout << x + r << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
