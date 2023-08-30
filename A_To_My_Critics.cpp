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
  int  n;cin>>n;  
  while (n--)
  {
    ll a,b,c;
  cin>>a>>b>>c;
  if( a+b>=10 || b+c>=10 || c+a>=10) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  }
  
  
  return 0;
}