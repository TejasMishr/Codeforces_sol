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
const int N=1009;
int a[N],b[N];
int t,n,xx,maxn;
int edge1[N],edge2[N],tot;
set<pii> st;
void dfs(int x,int y){
	if(st.count(make_pair(x,y))) return;
	st.insert(make_pair(x,y));
	cout<<"? "<<x<<' '<<y<<endl;
	cin>>xx;
	if(xx==-1) exit(1);
	if(xx==x) 
	{
		edge1[++tot]=x;
		edge2[tot]=y;
		return;
	}
	dfs(x,xx),dfs(xx,y);
}
void solve(){
    int n;
    cin >> n;
    REPE(i,2,n) a[i] = b[i] = 0;
    tot = 0;
    st.clear();
    for(int i = 2; i <= n; i++) {
        dfs(1, i);
    }
    cout << "! ";
    REPE(i,1,n-1) cout << edge1[i] << " " << edge2[i] << " ";
    cout << endl;
}
int main(){
    fast;
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
