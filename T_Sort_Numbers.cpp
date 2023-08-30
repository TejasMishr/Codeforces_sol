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
    //a<b<c
    int a, b ,c;
    cin>>a>>b>>c;
    int t1=a,t2=b,t3=c;
    if(a>b) swap(a,b);
    if(b>c){
        swap(c,b);
        if(a>b) swap(a,b);
    }
    
    
  cout<<a<<endl<<b<<endl<<c<<endl;
  cout<<endl;
  cout<<t1<<endl<<t2<<endl<<t3;

  return 0;
}