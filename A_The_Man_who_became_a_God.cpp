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

void solve()
{
  int n, k;
  cin >> n >> k;
  vi v(n);
  REP(i, 0, n)
      cin >> v[i];
  vi dif;
  for (int i = 1; i < n; i++)
    dif.pb(abs(v[i] - v[i - 1]));
  sort(all(dif), greater<int>());
  int ans = 0;
  for (int i = k - 1; i < dif.size(); i++)
    ans += dif[i];
  cout << ans << endl;
}
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}