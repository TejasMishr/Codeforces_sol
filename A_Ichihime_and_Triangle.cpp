//----------------> JAI SHREE RAM <------------- //
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
#define print(x) cout<<x<<endl;
#define REP(i,a,b) for ( int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_bfse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;
int main(){
  ll t; cin>>t;
  while(t--){
      ll a,b,c,d;
      cin>>a>>b>>c>>d;
      if(b==c) cout<<b<<" "<<b<<" "<<b<<endl;
      else {
        if (b+c > d) cout<<b<<" "<<c<<" "<<d<<endl;
        else cout<<b<<" "<<c<<" "<<(int)sqrt((pow(b,2)+pow(c,2)))<<endl;
      }
  }
  return 0;
}