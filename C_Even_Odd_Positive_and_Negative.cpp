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
  int n;cin>>n;
  int even=0,odd=0,pos=0,neg=0;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    if(a%2==0) even++;
    else odd++;
    if(a>0) pos++;
    if(a<0) neg++;
  }
  cout<<"Even: "<<even<<endl;
  cout<<"Odd: "<<odd<<endl;
  cout<<"Positive: "<<pos<<endl;
  cout<<"Negative: "<<neg<<endl;
  return 0;
}