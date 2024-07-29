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
#define inp(i,x1,y1,vec) for(ll i = x1; i < y1; i++) cin>>vec[i];
#define print(x) cout<<x<<endl;
#define REP(i,x1,y1) for(ll i = x1; i < y1; i++)
#define REPE(i,x1,y1) for(ll i = x1; i <= y1; i++)
#define nl cout<<endl;
#define autoprint(x1) for(auto i:x1) cout<<i<<nl;
#define trav(x,x1) for(auto& x : x1)
//  Container bounds
#define rall(z1)rbegin(z1),rend(z1)
#define all(x1) (x1).begin(), (x1).end()
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
    int n; cin>>n;
    // vi vec1(n),vec2(n),vec3(n);
    int x1=0,y1=0,z1=0;
    REP(i,0,n){
        int x,y,z; cin >> x>> y >> z;
        // cout<<"x1 : "<<x<<" "<<y<<" "<<z<<" "<<endl;
        x1 +=x;
        y1 +=y;
        z1 +=z;
        // cout<<"x11 : "<<x1<<" "<<y1<<" "<<z1<<" "<<endl;
    }
    if(x1==0 && y1==0 && z1==0) cout<<"YES";
    else cout<<"NO";

}
int main(){
//   readll(t);
//   while(t--){
      sol();
//   }
  return 0;
}