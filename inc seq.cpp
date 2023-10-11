
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
int main ()
{ 
  ll t;
  cin>>t;
      while (t--) {
        int n;
        cin >> n;
        
        vi vec(n);
        REP(i,0,n) cin >>vec[i];
        int nn= *max_element(vec.begin(), vec.end());
        int i=0,j=0,cnt=0;
        while (i <= nn + 1) {
            if (i + 1 == vec[j]) {
                i += 2;
                j += 1;
            } 
            else {
                j++;
                i++;
            }
            cnt++;
            if (j == n || cnt == n) {
                cout << i << endl;
                break;
            }
        }
    }
    
  return 0;
}