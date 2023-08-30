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
int main()
{ 
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> vs(n);
        for (int i = 0; i < n; i++) {
            cin >>vs[i];
        }
        
        int cnt = 0;
        string str = "vika";
        int idx = 0;
        
        for (int j = 0; j < m; j++) {
            bool found = false;
            
            for (int i = 0; i < n; i++) {
                if (vs[i][j] == str[idx]) {
                    idx++;
                    found = true;
                    break;
                }
            }
            
            if (found) cnt++;
            if (cnt == 4) break;
        }
        
        if (cnt == 4) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}