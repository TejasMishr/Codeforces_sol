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
// #define mod 1000000007;
const int MOD = 1000000007;

int jaadu(int len, const string& s) {
    vi freq(26, 0);
    for (char c : s) freq[c - 'a']++;
    ll res = 1;
    for (int f : freq) res = (res * (f + 1)) % MOD;
    return res;
}

int main() {
    int t;cin>>t;

    for (int i = 0; _ < T; ++_) {
        int len;cin >> len;
        string s;cin >> s;
        int res = jaadu(len, s);
        cout << res - 1 << endl;
    }

    return 0;
}