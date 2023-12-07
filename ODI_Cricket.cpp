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
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> wickets(n - 1);
        for (int i = 0; i < n - 1; ++i) {
            cin >> wickets[i];
        }

       long long total_scr = 0;
       vector<pi> v;
       v.push_back({n,1});
       
       for(int i = 0; i<wickets.size();  i++){
           v.push_back({wickets[i], i+2});
       }
       
       for(auto x: v){
           int maxi = max(x.first, x.second);
           total_scr += maxi;
       }
       
       cout<<total_scr<<endl;
    }

    return 0;
}