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
ll sumvector(vll vec){
ll x = 0;
REP(i,0,vec.size()) x += vec[i];
return x;
}
ll gcd(ll a, ll b) {
return a == 0 ? b : gcd(b%a, a);
}
ll lcm(ll a, ll b) {
return (a/gcd(a, b))*b;
}
//---------------------------------------------------------------------------------------------------------------------
void sol(){
    ll n,x;
    cin>>n>>x;
    ll res = 0;
    vll cars(n);
    inp(i,0,n,cars);
    ll sum = sumvector(cars);

    sort(all(cars));
    ll maxi = cars[n-1];
    if(((sum+x-1)/x) > maxi) res+=(sum+x-1)/x;
    else res=maxi;
    print(res);
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