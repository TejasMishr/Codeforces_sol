// +########################################################################################+
#include<bits/stdc++.h>
using namespace std;
// Code Shortners
#define ub upper_bound
#define lb lower_bound
#define ll long long
#define lli long long int
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vll vector<ll>
#define vvi vector<vi>
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
#define inp(i,a,b,vec) for(ll i = a; i < b; i++) cin>>vec[i];
#define print(x) cout<<x<<endl;
#define REP(i,a,b) for(ll i = a; i < b; i++)
#define REPE(i,a,b) for(ll i = a; i <= b; i++)
#define nl cout<<endl;
#define autoprint(a) for(auto i:a) cout<<i<<nl;
#define trav(x,a) for(auto& x : a)
//  Container bounds
#define rall(c)rbegin(c),rend(c)
#define all(a) (a).begin(), (a).end()
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define SUM(v) accumulate(all(v),0)
#define UNIQUE(x) x.erase(unique(x.begin(), x.end()), x.end())
#define fast ios_bfse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define si set<int>
#define sc set<char>
#define sst set<string>
#define Si stack<int>
#define Sc stack<char>
#define Sst stack<string>
 #define readll(n) ll n; cin >> n
#define readS(str) string str;  cin >> str

//---------------------------------------------------------------------------------------------------------------------
string sol(){
  int n; cin >>n;

  if(n <0) return "NO";

  else if(n%4 == 0 || n%7 == 0 || n%47 == 0 || n%74 == 0 || n%444 == 0 || n%447 == 0 || n%474 == 0 || n%477 == 0 || n%744 == 0 || n%747 == 0 || n%774 == 0 || n%777 == 0) return "YES";

  else {
    // string num =to_string(n);
    // for(char x : num) {
    //   if(x != '4' && x != '7') {
    //     return "NO";
    //     break;
    //   }
    // }
    return "NO";
  }
}
int main(){
  // int t; cin>>t;
  // while(t--){
    print(sol());
  // }
  return 0;
}
