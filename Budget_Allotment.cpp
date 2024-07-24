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
#define REP(i,vec,b) for( int i = vec; i < b; i++)
#define REPE(i,vec,b) for( int i = vec; i <= b; i++)
#define all(vec) (vec).begin(), (vec).end()
#define fast ios_bfse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007

//---------------------------------------------------------------------------------------------------------------------
void sol() {
    int n,x; cin >> n>> x;
    
    vll vec(n),vec1;
    REP(i,0,n) cin >>vec[i];
    ll tot = 0, res = 0;
    REP(i,0,n) {
        if (vec[i] >= x) {
            ll tmp = vec[i] - x;
            tot += tmp;
            res++;
        } 
        else {
            vec1.pb(vec[i]);
        }
    }
    sort(vec1.rbegin(),vec1.rend());
    REP(i,0,vec1.size()) {
        if (tot >= (x - vec1[i])) {
            tot -= (x - vec1[i]);
            res++;
        } 
        else break;
    }
    print(res);
}
int main(){
  ll t; cin>>t;
  while(t--){
      sol();
  }
  return 0;
}