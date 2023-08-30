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
int main ()
{ 
  ll t;
  cin>>t;
  while(t--){
      int n;cin>>n;
      
      
      int ev=0,od=0;
      int mid=n/2;
      
      for(int i=0;i<n;i++){

        int arr;cin>>arr;
        if(arr%2==0) ev++;
        else if(arr%2!=0) od++;
      }
      if (ev==od) cout<<0<<endl; 
      else if (n%2!=0){
        cout<<-1<<endl;
      }
      else {
        int ans=max(ev,od)-mid;
        cout<<ans<<endl;
      }


  }
  return 0;
}