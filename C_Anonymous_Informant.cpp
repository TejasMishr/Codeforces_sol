//--------->  JAI SHREE RAM <-----------
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
int main() {
    int t;cin >> t;
    while (t--) {
      ll n, k;cin >> n >> k;
      vector<ll> v(n);
      for (auto& it : v) cin >> it;
      ll c= n-1;
      ll chk=true;
      set<ll> s;
      for (int i = 0; i < k; i++){
         if (s.count(c))break;
         if (v[c] > n){
            chk = false;
            break;
         }
         s.insert(c);
         c=(c - v[c] + n) % n;
      }
      cout<<(chk ? "YES" : "NO")<<endl;
    }
    return 0;
}

