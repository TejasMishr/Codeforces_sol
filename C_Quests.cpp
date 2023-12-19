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
        int n,k;cin>>n>>k;

        vi a(n),b(n);

        REP(i,0,n) cin >> a[i];
        REP(i,0,n) cin >> b[i];
        int ans = 0,res = 0,maxi = 0;

        REP(j,0,n){
            if (k==j) break;
            maxi =max(b[j],maxi);
            ans +=a[j];
            int temp =ans+(k - 1 - j) * maxi ;
            res=max(res,temp);
        }
        print(res);
    }
  return 0;
}