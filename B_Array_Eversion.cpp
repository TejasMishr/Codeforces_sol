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
    int n;cin>>n;

    vi a(n);
    REP(i,0,n) cin >> a[i];
    

    int mv = 0;
    int tar = a.back();
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] > tar) {
            mv++;
            tar = a[i];
        }
    }
    print(mv);
  }
  return 0;
}