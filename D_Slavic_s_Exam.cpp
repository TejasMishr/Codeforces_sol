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

bool chk(const string &s, const string &tmp) { 
    int j = 0; 
    for (int i = 0; i < s.size() && j < tmp.size(); ++i) { 
        if (s[i] == tmp[j]) j+=1;
    } 
    return j == tmp.size(); 
} 
 
void sol(){
    string s, tmp; cin >> s >>tmp; 
    ll len = s.length();
    
    
    vector<bool> vis(tmp.length(), false); 
 
    // for (int i = 0; i < s.length(); ++i) { 
    //     if (s[i] == '?') continue; 
    //     for (int j = 0; j < tmp.length(); ++j) { 
    //         if (s[i] == tmp[j]) vis[j] = true; 
    //     } 
    // }
    ll i = 0, j = 0;
    while (i < s.length() && j < tmp.length()) {
        if (s[i] == '?') {
            s[i] = tmp[j];
            // print(s[i]);
            vis[j] = true;
            j++;
        }

        else if(s[i] == tmp[j]) {
            j++;
        }


        i++;
    }


    if(!chk(s, tmp)) {
        print("NO"); 
    }
    else { 
        for (char &x : s) { 
            if (x == '?')  x = 'a';
        } 
            
        print("YES");
        print(s); 
            
    } 
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