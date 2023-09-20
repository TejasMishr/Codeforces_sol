// Header Files and namespaces
#include<bits/stdc++.h>
using namespace std;
// Code Shortners
typedef long long ll;
typedef vector<long long> vi;
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
    ll t;cin>>t;
    while (t--) {
        ll n;cin>>n;

        vector< vi > mat(n, vi(n - 1));
        REP(i,0,n) REP(j,0,n-1) cin>>mat[i][j];
        ll ff=mat[0][0],idx=0;
        REP(i,1,n){
            if (mat[i][0] !=ff) {

                if(i+1 == n) idx=i;
                else if (mat[i+1][0] == mat[i][0]){
                    ff =mat[i][0];
                    // cout<<maxi;
                    break;
                }
                else{
                    idx = i;
                    // cout<<"idx : "<<idx<<endl;
                    break;
                }
            }
        }

        cout<<ff<<" ";
        REP(i,0,n-1) cout<<mat[idx][i]<<" ";
        cout<<endl;
    }

    return 0;
}

