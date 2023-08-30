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
    int x=0;
    int maxi=0,maxj=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a>10){
            x++;
            continue;
        } 
        else{
            maxi=max(maxi,b);
            // print(maxi);
            // print(maxj);
            // maxj=max(maxj,a);
        }

        
    }
    cout<<maxi<<endl;
    // else cout<<maxj<<endl;
    
      

  }
  return 0;
}