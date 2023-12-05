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
 while (t--) {
        string s;
        cin >> s;

        vi sma,capi;
        string la = "qwertyuiopasdfghjklzxcvbnm",ua = "QWERTYUIOPASDFGHJKLZXCVBNM";
        vector<char> a;
        string ans = "";
        int cnt = 0;

        REP(i,0,s.length()) {

            if (s[i] == 'B' && !capi.empty()) {
                a[capi.back()] = '_';
                capi.pop_back();
            } 
            else if (s[i] == 'b' && !sma.empty()) {
                a[sma.back()] = '_';
                sma.pop_back();
            } 
            else if (s[i] != 'b' && s[i] != 'B') {
                if (la.find(s[i]) != string::npos) sma.push_back(cnt);
                else capi.push_back(cnt);
                a.push_back(s[i]);
                cnt++;
            }
        }

        for (char i : a) if (i != '_') ans += i;
        cout << ans << endl;
    }
  return 0;
}