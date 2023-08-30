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
#define mod 1000000007;
void solve()
{
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    

    vi ans;
    ans.push_back(arr[0]);
    int prev = arr[0];
    for (int i = 1; i < n; i++){
        ans.push_back(arr[i]);
        if (arr[i] < prev) ans.push_back(arr[i]);
        prev = arr[i];
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    
    cout << endl;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}