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
        string s;cin>>s;
        if ((s[0]=='a' && s[1] =='b' && s[2] =='c') || (s[0] =='a' && s[1] =='c' && s[2] =='b') || (s[0] == 'b' && s[1] =='a' && s[2] == 'c') || (s[0] =='c' && s[1] =='b' && s[2] =='a')) cout <<"YES"<<endl;
        else cout<<"NO"<<endl;
        

  }
  return 0;
}