//-----------> JAI SHREE RAM <---------------
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
vector<int> merge(vector<int>& a, vector<int>& b) {
    int i = 0, j = 0;
    vector<int> res;
    while (i < a.size() && j < b.size()) {
        if (a[i] > b[j]) {
            res.push_back(a[i]);
            i++;
        } 
        else {
            res.push_back(b[j]);
            j++;
        }
    }
    while(i < a.size()) {
        res.push_back(a[i]);
        i++;
    }
    while (j < b.size()) {
        res.push_back(b[j]);
        j++;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;cin >> n >> m;
        vi a(n), b(m);
        REP(i,0,n) cin >> a[i];
        REP(i,0,m) cin >> b[i];
        sort(b.rbegin(), b.rend());
        vector<int> merged = merge(a, b);
        for (int i = 0; i < merged.size(); ++i) cout << merged[i] << " ";
        cout << endl;
    }
    return 0;
}
