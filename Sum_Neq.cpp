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
	    int n;
	    cin>>n;
        bool chk = true;
	    vi vec(n);
	    REP(i,0,n) cin>>vec[i];
        
        // int first = vec[0];
        
        REP(i,1,n) if(vec[i] !=vec[0]) chk=false;
        

        if(chk) cout << "NO" << endl;
        else{
            if (n == 4) cout << (vec[0] + vec[1] == vec[2] + vec[3] ? "NO" : "YES") << endl;
            else print("YES");
        }

    }

  return 0;
}