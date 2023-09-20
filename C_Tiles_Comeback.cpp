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
      int n,k;
      cin>>n>>k;
      vi vec(n);
      int count1=0,count2=0,idx1=-1;
      REP(i,0,n) cin>>vec[i];
      int x=vec[1],y=vec[n-1];
      REP(i,0,n){
        if(vec[i]==x) {
        idx1=i;
        count1++;
      }
      } 
      for(int i=n-1;i<idx1;i--) if(vec[i]==y) count2++;
      
      if(vec[1]==vec[n-1] && count1 >= k) cout<<"YES"<<endl;
      else if(count1>=k && count2>=k) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;




  }
  return 0;
}