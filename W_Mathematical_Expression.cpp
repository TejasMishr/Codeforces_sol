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
  int a,b;
  ll res;
  char c,e;
  cin>>a>>c>>b>>e>>res;
  if(c == '+' ){
    if (a+b==res) cout<<"Yes";
    else cout<<a+b;
  }
  else if(c=='-'){
    if (a-b==res) cout<<"Yes";
    else cout<<a-b;
  }
  else if(c=='*'){
    if (a*b==res) cout<<"Yes";
    
    else cout<<a*b;
  }
  
  
  return 0;
}