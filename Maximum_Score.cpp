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
    int t;
    cin>>t;
    while(t--){
     int n;
    cin>>n;
    vi vec(n);
    REP(i,0,n) cin>>vec[i];
    // int tot = 0;
    int o=0,e=0;
    REP(i,0,n){
        o+=(vec[i] == 0) ? 1 : 0;
        // print(o);
        e+=(vec[i] == 0) ? 0 : 1;
        // print(e);
    }
    print(min(e,o));
 }
 return 0;
} 