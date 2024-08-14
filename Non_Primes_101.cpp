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
#define MIN(vec) *min_element(all(vec))
#define MAX(vec) *max_element(all(vec))
#define SUM(vec) accumulate(all(vec),0)
#define UNIQUE(x) x.erase(unique(x.begin(), x.end()), x.end())
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define si set<int>
#define sc set<char>
#define sst set<string>
#define Si stack<int>
#define Sc stack<char>
#define Sst stack<string>
 #define readll(n) ll n; cin >> n
#define readS(str) string str;  cin >> str
const ll mod=1000000007;

//---------------------------------------------------------------------------------------------------------------------
int sumvector(vi &arr){
int x = 0;
REP(i,0,arr.size()) x += arr[i];
return x;
}
ll gcd(ll a, ll b) {
return a == 0 ? b : gcd(b%a, a);
}
ll lcm(ll a, ll b) {
return (a/gcd(a, b))*b;
}
//---------------------------------------------------------------------------------------------------------------------

bool chk(int n) { 
    if(n==1) return false; 
    if(n==2) return true; 
    REPE(i,2,sqrt(n)) if(n%i==0) return false;  
    return true; 
} 

void sol(){
  readll(n);
  vll vec(n), arr; 
  map<int,vi> mp1; 
  REP(i,0,n){ 
   cin>>vec[i]; 
   mp1[vec[i]].pb(i); 
  } 

  int len =arr.size();
  
  for(auto x:mp1) arr.pb(x.F); 


  bool flag=false; 
  REP(i,0,arr.size()){ 


   if( arr[i] > 1 ){
    if(mp1[arr[i]].size()>1) { 
        flag=true; 
        // cout<<"-1"<<endl;
        cout<< ++mp1[arr[i]][0] << " "  << ++mp1[arr[i]].back() <<endl; 
        
        break; 
   } 
   }
   REP(j, i+1, arr.size()){ 
    int sum= arr[i] + arr[j]; 
    if( !chk(sum )) { 
        flag=true;
        // cout<<"-1"<<endl;
        // cout<< mp1[arr[i]][0] << mp1[arr[j]][0] <<endl; 
        cout<< ++mp1[arr[i]][0] <<" " << ++mp1[arr[j]][0] <<endl; 
        break; 
    } 
   } 


   if(flag==true) break; 
  } 


  if(flag==false) print("-1");


}
int main(){
  fast;
  ll t=1;
  cin>>t;
  while(t--){
      sol();
  }
  return 0;
}

