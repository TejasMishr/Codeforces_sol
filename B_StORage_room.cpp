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
#define REP(i,a,b) for ( int i = a; i <= b; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_bfse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;
int main() {
    int t;cin>>t;
    while(t--){
        int s;cin>>s;
        int mat[s + 1][s + 1],res[s + 1];
        REP(i,1,s) REP(j,1,s) cin >> mat[i][j];
        REP(i,1,s){
            int t1 = (1LL << 30) - 1;
            REP(j,1,s) if (i != j) t1 = (t1 & mat[i][j]);
            res[i] = t1;
        }
        bool b = true;
        REP(i,1,s) REP(j,1,s) if ((res[i] | res[j]) != mat[i][j] && i != j) b = false;
        cout<<(b ? "YES" : "NO")<<endl;
        if(b){
            for (int i = 1; i <= s; i++) cout << res[i] << ' ';
            cout << endl;
        }
    }
    return 0;
}