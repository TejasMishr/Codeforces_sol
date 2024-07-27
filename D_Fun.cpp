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
void sol() {
    ll n,x; cin >>n >>x;

    ll tot = 0;
    REPE(i,1,n) {
        // int mini = min(x - i, n/i);
        // print(mini);
        for(int j=1; i*j<n; j++) {
            ll cal= (n-i*j) / (i+j);
            
            ll minn =min(x-i-j, cal);
            // print(mini);
            tot += max(0LL, minn);
            // print(tot); 
        }
    }
    print(tot);
}
int main(){
  ll t; cin>>t;
  while(t--){
      sol();
  }
  return 0;
}