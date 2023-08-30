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
int main() {
int t;
cin>>t;
while(t--){
 ll n;
 cin >> n;
 vector<ll> arr(1+n+1,0);
 for (int i = 1; i <= n; i++) cin >> arr[i];
 ll ans = 0;
 for (int i = 1; i <= n; i++) ans = max(ans, arr[i]);
 for (int i = 1; i <= n; i++){
    ll res = arr[i];
    for (int j = i + 1; j <=min(n,(ll)i+256); j++){
        res ^= arr[j];
        ans = max(ans, res);
    }
 }
 cout << ans << '\n';
}
return 0;
}