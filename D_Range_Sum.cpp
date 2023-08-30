// Header Files and namespaces
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
#define len(s) (int)s.size()
#define print(x) cout<<x<<'\n'
#define REP(i,a,b) for ( int i = a; i< b; i++)
#define all(a) (a). begin(), (a).end()
#define fast ios_bfse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;



void solve(){
    ll n1,n2;
    cin>>n1>>n2;
    ll a,b;
    
    a= min(n1,n2);
    b=max(n1,n2);
    b++;
    
    ll ans=( ((b*(b-1))/2) - ((a*(a-1))/2) ) ;
    cout<<ans<<endl;
}
int main ()
{ 
  ll t;
  cin>>t;
  while(t--){
      solve();

  }
  return 0;
}