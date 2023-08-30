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
int fun(int cnt) {
	return 2 * cnt - (cnt & 1);
}
int main ()
{ 
  ll t;
  cin>>t;
  while(t--){
    int n;
	cin >> n;
	string a, b;
	cin >> a >> b;
	int cnt1 = 0, cnt2 = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] != b[i])cnt1++;
		if (a[n - i - 1] != b[i])cnt2++;
	}
	// cerr << cnt1 << " " << cnt2 << nline;
	if (cnt1 == 0) {
		print(0);
	}
	else if (cnt2 == 0) {
		print(2);
	}
	else {
        ll x = min( fun(cnt1) , 2 + fun(cnt2 - 1) );

		cout << max(0LL, x ) << endl;
	}


      

  }
  return 0;
}