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
void jaadu(){
   ll n, i, j, m, k,ans=0,x,y;
   cin >> n;
   string s;
   cin>>s;
   ll l1=count(s.begin(),s.end(),'L'),o1=count(s.begin(),s.end(),'O');
   ll l2=0,o2=0;
   for(i=0;i<n;i++){
      if(s[i]=='L') l2++;
      else o2++;
      if((l2>=1) && (l2!=(l1-l2) && o2!=(o1-o2)) &&((l1!=l2 || o1!=o2))){
        cout<<i+1<<endl;
        return;
      }
      if((o2>=1) && (l2!=(l1-l2) && o2!=(o1-o2)) &&((l1!=l2 || o1!=o2))){
        cout<<i+1<<endl;
        return;
      }
    }
    cout<<-1<<endl;
   
}
int main(){
  ll t=1;
  while(t--){
      jaadu();
  }
  return 0;
}