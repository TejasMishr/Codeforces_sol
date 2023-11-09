#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define F first
#define S second
#define pb push_back
#define mp make_pair
#define len(s) (int)s.size()
#define print(x) cout<<x<<'\n'
#define REP(i,a,b) for (int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007

int main() {
    int m, n, o, p;
    cin >> m >> n;
    cin >> o >> p;
    
    int mat[m][n];
    int mat2[o][p];

    REP(i, 0, m) REP(j, 0, n) cin >> mat[i][j];
    REP(i, 0, o) REP(j, 0, p) cin >> mat2[i][j];
    
    if (n != o) {
        cout << "Matrices cannot be multiplied!";
        return 0;
    }
    
    int ans[m][p];
    memset(ans, 0, sizeof(ans)); 
    
    REP(i, 0, m) REP(j, 0, p) REP(k, 0, n) ans[i][j] += mat[i][k] * mat2[k][j];
    
    
    REP(i, 0, m) {
        REP(j, 0, p) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
