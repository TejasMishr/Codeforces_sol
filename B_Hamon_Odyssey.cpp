// Header Files and namespaces
#include <bits/stdc++.h>
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
#define print(x) cout << x << '\n'
#define REP(i, a, b) for (int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define fast                    \
  ios_bfse::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define mod 1000000007;
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vi a(n);

    for (int i = 0; i < n; i++)
      cin >> a[i];
    int mx = 1;
    while (mx <= 1e9)
    {
      mx *= 2;
    }

    mx -= 1;

    int mn = mx;
    for (int i = 0; i < n; i++)
      mn &= a[i];
    int res = 0;
    int cur = mx;
    for (int i = 0; i < n; i++)
    {
      cur &= a[i];
      if (cur == 0)
      {
        res += 1;
        cur = mx;
      }
    }

    res += mn > 0;
    cout << res << endl;
  }
  return 0;
}
