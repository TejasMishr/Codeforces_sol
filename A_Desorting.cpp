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
#define fi(i,a,b) for ( int i = a; i< b; i++)
#define all(a) (a). begin(), (a).end()
#define fast ios_bfse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;


void solve(){
    int n;cin>>n;
    int arr[n];
    fi(i,0,n) cin>>arr[i];
    int ans=INT_MAX;
    fi(i,0,n-1){
        if(arr[i+1]<arr[i]) {
            cout<<"0"<<endl;
            return;
        }
        ans=min(ans,(arr[i+1]-arr[i])/2 + 1);
    }
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