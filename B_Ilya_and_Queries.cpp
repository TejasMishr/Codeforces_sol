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
#define REP(i,a,b) for(int i = a; i < b; i++)
#define REPE(i,a,b) for(int i = a; i <= b; i++)
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
void sol(){
   string s;
   cin>>s;
   vi v;
   if(s[0]==s[1]) v.pb(1);
   else v.pb(0);
    REP(i,1,s.length()-1) {
        int cnt=v[i - 1];
        if(s[i]==s[i + 1]) cnt++;
        v.pb(cnt);
 
    }
    int n; cin>>n;
    REP(i,0,n) {
        int l,r; cin >> l >> r;
           print(((l==1) ? (v[r-2]) : (v[r-2]- v[l-2])));
    }
   
}
int main(){
//   readll(t);
//   while(t--){
      sol();
//   }
  return 0;
}