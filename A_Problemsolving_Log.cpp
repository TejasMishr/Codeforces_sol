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
#define mp1 make_ pair
#define len(s) (int)s.size()
#define print(x) cout<<x<<endl;
#define REP(i,a,b) for ( int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_bfse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;
int main(){
  ll t; cin>>t;
   while (t--) {
        int n;cin>>n;
        vi mp(26);
        string str;
        cin>>str;
        int tot=0;
        REP(i,0,26) mp[i] = 1+i;
        for(char x : str) {
            mp[x-'A']--;
            if (mp[x-'A']==0) tot++;
        }
        print(tot);
    }
  return 0;
}