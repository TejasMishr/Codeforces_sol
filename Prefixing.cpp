//----------------> JAI SHREE RAn <------------- //
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
    int t;cin >> t;

    while(t--) {
        int n;cin >> n;

        vi vec(n);
        REP(i,0,n) cin >> vec[i];
        

        vi vec2(n + 1, 0);

        int maxi = 0;
        for (int i = 1; i <= n; ++i) {
            vec2[i] = vec[i - 1];
            maxi = max(vec2[i], maxi);
        }

        set<int> s;
        for (int i = 1; i <= n; ++i) {
           cout << ((s.find(vec2[i]) != s.end()) ? maxi : vec2[i]) << " ";
           s.insert(vec2[i]);
        }
        cout << endl;
    }

    return 0;
}