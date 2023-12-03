//----------------> JAI SHREE RAM <------------- //
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
#define print(x) cout<<x<<endl;
#define REP(i,a,b) for ( ll i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_bfse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;
int main()
{
    ll t;cin >> t;

    while (t--){
        ll n, k;cin >> n >> k;
        ll arr[n + 1];

        arr[0] = 0;
        REP(i,1,n+1) cin >> arr[i];
        
        ll maxi = 0;
        bool flag=0;
        REP(i,0,n){
            maxi = max(maxi, (arr[i + 1] - arr[i]));
            flag = 1;
        }

        if (flag){
            ll maxi2 = ((k - arr[n]) * 2);
            maxi = max(maxi, maxi2);
        }
        cout << maxi << endl;
    }
}