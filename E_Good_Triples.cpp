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
#define REP(i,a,b) for ( int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_bfse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;
int main(){
    ll t; cin>>t;
    while(t--) {
        ll ans = 1;
        string s;
        cin>>s;
        vector < ll > cnt(30,0);
        for(ll i = 0 ; i <= 9 ; i++) {
            for(ll j = 0 ; j <= 9 ; j++) {
                for(ll k = 0 ; k <= 9 ; k++) {
                    cnt[i+j+k]++;
                }
            }
        }
        for(ll i = 0 ; i < (ll)s.size(); i++) {
            ans*=cnt[s[i]-'0'];
        }
        cout<<ans<<endl;
    } 
  return 0;
}