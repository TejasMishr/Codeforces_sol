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
// #define mp make_ pair
#define len(s) (int)s.size()
#define print(x) cout<<x<<endl;
#define REP(i,a,b) for ( int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_bfse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 998244353
int main(){
  ll t; cin>>t;
  while(t--){
        ll n;
        cin>>n;
        vector<ll> a(2*n);
        for(ll i=0;i<2*n;++i){
            cin>>a[i];
        }
        ll ans1=0;
        ll ans2=1;
        set<ll> s;
        vector<ll> vis(n+1);
        for(ll i=0;i<2*n;++i){
            if(s.find(a[i])==s.end()){
                s.insert(a[i]);
                continue;
            }
            s.erase(a[i]);
            if(s.size()==0){
                ans1++;
                ll cnt=0;
                set<ll> temp;
                temp.insert(a[i]);
                while(1){
                    if(temp.size()==0){
                        break;
                    }
                    ll k;
                    ll x=*temp.begin();
                    temp.erase(temp.begin());
                    if(vis[x]) continue;
                    cnt=(2+cnt)%mod;
                    vis[x]=1;
                    for(ll j=0;j<=i;++j){
                        if(a[j]==x){
                            k=j;
                            break;
                        }
                    }
                    map<ll,ll> mp;
                    for(ll j=k+1;j<=i;++j){
                        if(a[j]==x){
                            break;
                        }
                        mp[a[j]]++;
                    }
                    for(auto it:mp){
                        if(it.second==1){
                            temp.insert(it.first);
                        }
                    }
                }
                ans2=(ans2*cnt)%mod;
            }
        }
        cout<<ans1<<' '<<ans2<<"\n";
  }
  return 0;
}