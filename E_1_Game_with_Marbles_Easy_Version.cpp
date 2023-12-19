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
#define mp make_pair
#define len(s) (int)s.size()
#define print(x) cout << x << endl;
#define REP(i, a, b) for (int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod 1000000007;


void cnt(int n, vi& v1, vi& v2) {
    vector<pi> v(n);
    REP(i, 0, n) v[i] = {v1[i] + v2[i], i};
    sort(all(v));
    ll res=0,opp=0;
    for(int i = n - 1; i >= 0; i--) {
        res +=(opp % 2 == 0) ? (v1[v[i].S] - 1) : -(v2[v[i].S] - 1);
        opp++;
    }
    print(res);
}
int main() {
    ll t;
    cin >> t;
    while (t--) {
        int n;cin>>n;
        int v1[n],v2[n];
        REP(i,0,n) cin>>v1[i];
        REP(i,0,n) cin>>v2[i];
        cnt(n,opp,v1,v2)
    }
    return 0;
}
