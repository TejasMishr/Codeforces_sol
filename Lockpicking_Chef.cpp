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


int get(string s, string k, int i) {
    int ans = 0;
    for (int j = 0; j<k.length(); j++) {
        int a =abs(static_cast<int>(s[i + j]) - static_cast<int>(k[j]));
        if (a>5) {
            a=10 - a;
        }
        ans+=a;
    }
    return ans;
}
int main ()
{ 
  ll t;
  cin>>t;
  while(t--){
      int n, m;cin >> n >> m;
        string s, k;cin >> s >> k;
        int diff=999;

        for (int i = 0;i <= n-m;i++) diff = min(diff, get(s, k, i));
        cout <<diff<< endl;

  }
  return 0;
}