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
ll sol(){
    ll b, c, d; cin>>b>>c>>d;
    ll a=0, cry=0;
        
    bool chk=1,chk2=0;
        REP(i,0,60){
            int bi=(b>>i)&1, ci=(c>>i) & 1, di=(d>>i)&1;
            chk2=0;

            ll ai=0, temp=0;
            
            ll lb = (bi - cry);

            // print(lb);
            if(lb >=0){
                ll dif = lb - di;
                if(dif >=0 && (dif/2 <=1)){
                    if(dif%2 ==0){
                        ai=0;
                        temp = dif/2;
                        cry = temp;
                        chk2=1;
                        a |= (ai<<i);
                    }
                    // else{
                    //     ai=1;
                    //     temp = dif/2;
                    //     cry = temp;
                    //     chk2=1;
                    //     a |= (ai<<i);
                    //     print(dif);
                    // }
                    
                }
            }
            if(!chk2){

                ll ac = ci,l1 = bi|1;
                ll dif1 = (l1 - ac - cry);

                // print(dif1);
                if(dif1 >= 0){
                    ll dif = (dif1 - di);
                    if((dif >=0) && (dif/2 <=1)){
                     if(dif%2 == 0){
                        ai=1;
                        a |= (ai<<i);
                        temp = dif/2;
                        cry = temp;
                        chk2=1;
                     }
                    //  else{
                    //     ai=0;
                    //     a |= (ai<<i);
                    //     temp = dif/2;
                    //     cry = temp;
                    //     chk2=1;
                    //  }
                    }
                }
            }
            if(!chk2){ chk=0; break;}
        }

        return (chk && cry ==0) ? a : -1;
}
int main(){
  fast;
  ll t=1;
  cin>>t;
  while(t--){
    
    print(sol());
  }
  return 0;
}