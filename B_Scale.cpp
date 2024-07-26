// +########################################################################################+
#include<bits/stdc++.h>
using namespace std;
// Code Shortners
#define ub upper_bound
#define lb lower_bound
#define endl "\n"
#define ll long long
#define lli long long int
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vll vector<ll>
#define vvi vector < vi >
#define vvc vector<vector<char>>
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define pii pair<int,int>
#define mll map<ll,ll>
#define pll pair<ll, ll>
#define F first
#define S second
#define pb push_back
#define ppb pop_back
#define pf  push_front
#define ppf pop_front
#define mpair make_pair
#define len(s) (int)s.size()
#define print(x) cout<<x<<endl;
#define REP(i,a,b) for( int i = a; i < b; i++)
#define REPE(i,a,b) for( int i = a; i <= b; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_bfse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007

//---------------------------------------------------------------------------------------------------------------------
void rd(vector<vc>& grid, int n,int k) {
    REP(i,0,n){
        string row, col; cin >>row;
        for(auto x: row) grid[i].pb(x);
        // for(auto x: col)
    }
}

void red(const vector<vc>& grid, int n, int k) {
    for (int i = 0; i <n; i=k +i) {
        for (int j = 0; j<n; j =k +j ) {
            cout<<grid[i][j];
        }
        cout<<'\n';
    }
}
void sol(){
    int n, k; cin>>n>>k;
    vector<vc> grid(n);

    rd(grid,n,k);
    
    red(grid, n, k);
}

int main(){
  ll t; cin>>t;
  while(t--){
      sol();
  }
  return 0;
}



