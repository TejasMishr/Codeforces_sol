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
  ll t;cin>>t;
  while(t--) {
        string s,res="";
        cin>>s;
        
        int tot0 =count(s.begin(), s.end(), '0'),tot1 = count(s.begin(), s.end(),'1');
        for (char c :s) {
            if (tot1<1 && c=='0') break;
            else if(tot0<1 && c=='1') break;
            if (c =='0' && tot1>0) {
                tot1--;
                res +='1';
            } 
            else if (tot0>0 && c=='1') {
                tot0--;
                res+='0';
            }
        }
        cout<<abs(static_cast<int>(res.length()) - static_cast<int>(s.length()))<<'\n';
    }
  return 0;
}