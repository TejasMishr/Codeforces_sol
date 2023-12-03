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
#define REP(i,a,b) for (ll i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_bfse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;

int main() {
    int t;cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<ll> vec(n);
        ll ans = 0;
        REP(i, 0, n) cin >> vec[i];

        if(n==1){
            cout << vec[0] - 1 << endl;
            continue;
        }

        vector<ll> res;
        
        res.push_back(1);

        REP(i, 0, n) {
            if(vec[i] != res[res.size() - 1]) res.push_back(vec[i]);
        }
        
        
        REP(i,0,res.size()-1){
            if(res[i] < res[i+1]) ans+=(res[i + 1]-res[i]);
        } 
        cout << ans << endl;
    }

    return 0;
}