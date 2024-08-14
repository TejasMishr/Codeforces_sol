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
//---------------------------------------------------------------------------------------------------------------------const int MAXN = 5e5 + 5;
const int LOGG = 20;
// const int MAXN = 5000005;
int seg[20][5000005];
int n, q;

void table(vector<int>& vec) {
    REP(i, 0, n) seg[0][i] =vec[i]+i; 
    
    
    REP(i, 1, LOGG) {
        REP(j, 0, n) {
            
            (seg[i-1][j] < n) ? seg[i][j] = seg[i - 1][seg[i - 1][j]] : seg[i][j] = n;
            // print(seg[i][j])
            // cout << seg[i - 1][j] << " " << seg[i - 1][seg[i - 1][j]] << endl;
            
        }
    }
}

int sol(int X, int Y) {
    int node = X-1;
    if (node >= Y-1) return 0; 
    // if (node == 0) return Y-1;

    int res = 0;
    
    for (int i = LOGG-1 ; i >= 0; i--) {

        if ((Y-1) > seg[i][node]) {
            node = seg[i][node];
            // print(node)
            res = res + (1<<i);
            // print(res)
        }
    }
    if ((Y-1) <= seg[0][node] ) return res+1;
    else return -1;
}


int main(){
  fast;
  ll t=1;
  cin>>t;
  while(t--){
        cin >> n >> q;
        vi vec(n);
        inp(i, 0, n, vec);
        // trav(x, vec) x = x + i;
        table(vec);
        
        while (q--) {
            int x1, y1 ; cin >> x1>>y1;
            print(sol(x1, y1));
        }
  }
  return 0;
}