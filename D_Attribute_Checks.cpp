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
ll calc_segments(vll &tmp, vector<vll> &sgmn){
    ll seg =0;
    bool chk=true;
    for(auto ch : tmp){
        if(ch == 0 && chk){
            seg++; continue;
        }

        sgmn[seg].pb(ch);
    }
    return seg;
}

ll sol(){
    ll n, m; cin >> n >> m;
    vll tmp(n);
    for(auto &x : tmp) cin >> x;
    vector<vll> sgmn(m+1);
    ll seg = calc_segments(tmp, sgmn);
    vector<vll> vecS(m+1), vecI(m+1);
    vll dpprv(m+1, -1);
    REPE(i,0,seg){
        for(auto s : sgmn[i]) (s <0) ? vecS[i].pb(-s) : vecI[i].pb(s);
        sort(all(vecI[i])); sort(all(vecS[i]));
    }
    dpprv[0] = 0;
    REPE(i,0,seg){
        vll dpnxt(m+1, -1);
        REPE(s,0,i){
            if(dpprv[s] != -1){
                int diff;
                diff = (i-s);
                ll tot = dpprv[s] + upper_bound(all(vecS[i]), s) - vecS[i].begin() + upper_bound(all(vecI[i]), diff) - vecI[i].begin();
                if(i < seg){
                    if(s +1 <= m) dpnxt[s+1] = max(dpnxt[s+1], tot);
                    if(i - s +1 <= m) dpnxt[s] = max(dpnxt[s], tot);
                }
                else{
                    dpnxt[s] = max(dpnxt[s], tot);
                }
            }
        }
        dpprv = move(dpnxt);
    }
    ll ans =0;
    for(auto x : dpprv) ans = max(ans, x);
    return ans;
}
int main(){
  fast;
//   ll t=1;
//   cin>>t;
//   while(t--){
      print(sol());
//   }

  return 0;
}


