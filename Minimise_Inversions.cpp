// +########################################################################################+
#include<bits/stdc++.h>
using namespace std;
// Code Shortners
#define ub upper_bound
#define lb lower_bound
#define endl "\n"
#define ll long long
#define lli long long int
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vll vector<ll>
#define vvi vector < vi >
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
#define print(x) cout<<x<<endl;
#define REP(i,a,b) for( int i = a; i < b; i++)
#define REPE(i,a,b) for( int i = a; i <= b; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_bfse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007

//---------------------------------------------------------------------------------------------------------------------
void sol(){
    ll n, k;cin >>n >>k;
    string s; cin>> s;
    
    
    for(char x : s) assert((x == '0') || (x == '1')); 
    ll tmp = n;
    vll vec(n+5, 0);
    for(ll i = n - 1; i >= 0; i--) {
        vec[i] = vec[i + 1] + (s[i] == '0'); 
        if(vec[i] <= k) tmp = i;
    }
    ll res, x0= 0, x1 = 0, cur = 0;
    REP(i,0,tmp) {
        if(s[i] == '0') {
             x0++;
             cur += x1; 
        }
        else x1++;
    }
    
    res = cur;
    REP(i,tmp,n) {
        if(s[i] == '1') {
            x1 -=1; 
            k -=1;
            cur = cur - x0; 
            x0++;
            // print(cur);
           
            
            
        }
        // if(s[i]=='0'){
        //     x0 -= 1;
        //     k -= 1;
        // }
        if(k< 0) break; 

        
        while(vec[tmp] > k) {


            if(s[tmp] == '0') {
                cur += x1; 
                // print(cur);
                x0 += 1; 
            } 
            else x1++;


            tmp++;

        }
        x0--; 


        res = min(res, cur);
    }
    print(res);
}
int main(){
  ll t; cin>>t;
  while(t--){
      sol();
  }
  return 0;
}

