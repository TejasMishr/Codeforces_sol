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



 
bool decide(ll hc, ll dc, ll hm, ll dm){
	ll first = (hm/dc) + (hm%dc!=0);
	ll second = (hc/dm) + (hc%dm!=0);
 
	return first<=second;
}
void doit(){
	ll hc,dc,hm,dm;
	cin>>hc>>dc>>hm>>dm;
 
	ll k,w,a; cin>>k>>w>>a;
 
	bool flag = false;
	for(ll i=0;i<=k;i++){
		if(decide(hc + i*a , dc + (k-i)*w, hm, dm)){
			flag = true;
			break;
		}
	}
	if(flag) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
int main ()
{ 
  int t;
  cin>>t;
  while(t--){
      doit();
  }
  return 0;
  
}