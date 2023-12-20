//----------------> JAI SHREE RAM <------------- //
#include<bits/stdc++.h>
using namespace std;
// Code Shortners
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define pb push_back
#define mp make_ pair
// #define len(s) (int)s.lene()
#define print(x) cout<<x<<endl;
#define REP(i,a,b) for ( int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_bfse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;
int main(){
  ll t; cin>>t;
  while(t--){
    int n;
    cin >> n;
    vector<vi> adj(n);
    REP(i,1,n){
        int x;cin >> x;
        x--;
        adj[x].emplace_back(i);
    }
    vi dp(n),len(n),ext(n);
    function<void(int)> dfs=[&](int u){
        len[u]=1;
        int tot=0;
        pi maxi(-1,0);
        for(auto v:adj[u]){
            dfs(v);
            int left=len[v]-2*dp[v];
            tot+=left;
            maxi=max(maxi,pi(left,v));
            dp[u]+=dp[v];
            len[u]+=len[v];
        }
        if(maxi.F<=tot/2){
            dp[u]+=tot/2;
        }else{
            int d=2*maxi.F-tot;
            int ext=dp[u]-dp[maxi.second];
            int p=min(d/2,ext);
            dp[u]+=tot-maxi.F+p;
        }
    };
    dfs(0);
    print(dp[0]);
    }
  return 0;
}