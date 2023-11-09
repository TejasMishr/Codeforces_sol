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
int chk(vector<int>& vec) {
    int n = vec.size();
    vector<int> dp(n + 1, 0);
    for (int i = n - 1; i >= 0; --i) {
        if (i + vec[i] >= n) dp[i] = dp[i + 1] + 1;
        else dp[i] = min(dp[i + 1] + 1, dp[i + vec[i] + 1]);
        
    }
    return dp[0];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        REP(i,0,n) cin >> vec[i];
        int res=chk(vec);
        cout <<res<< endl;
    }

    return 0;
}