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
const int N = 1e7+2;
int dp[2][N];
int vis[2][N];
int go(int same, int steps){


	if(steps == 1){
		if(same) return 0;
		return 1;
	}

	int ans = dp[same][steps];
	if(vis[same][steps]) return ans;
	vis[same][steps] = 1;


	if(same == 1)  return ans = (3LL*go(1-same, steps-1))%mod;
	else  return ans = (2LL*go(0, steps-1) + go(1, steps-1))%mod;
}
void sol(){
    ll n; cin>>n;
    dp[1][0] = 1;
	for(int steps = 1; steps < N; steps++){
		dp[1][steps] = (3LL*dp[0][steps-1])%mod;
		dp[0][steps] = (2LL*dp[0][steps-1] + dp[1][steps-1])%mod;
	}
	cout << dp[1][n] << endl;
//   print(go(1,n));
//   if(n==1) print(0)
//   else if(n==2) print(3)
//   else{
//     vll ans = {0, 3};
//     REP(i,0,n-2){
//         ans.pb((2*ans.back() + 3*ans[ans.size()-2])%mod);
//         ans.erase(ans.begin());
//     }
//     print(ans.back());
//   }
}
int main(){
  fast;
  ll t=1;
//   cin>>t;
  while(t--){
      sol();
  }
  return 0;
}