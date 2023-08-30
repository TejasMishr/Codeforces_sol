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
#define mod 1000000007
int main ()
{ 
  ll a,b,c,d;
  cin>>a>>b>>c>>d;
  a=a%100;
  b=b%100;
  c=c%100;
  d=d%100;
  int ans=(a*b*c*d) % 100;
  if(ans<10){
    cout<<0<<ans;
    
  }

  

//   d2= (c*d)%10;
  else cout<<ans;
  return 0;
}