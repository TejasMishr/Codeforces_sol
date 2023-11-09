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

bool iss(const string& x, const string& s) {
    size_t pos = x.find(s);
    return pos != string::npos;
}

int main() {
    int t;cin >> t;

    while (t--) {
        int n, m;
        cin>>n>>m;
        string x, str;
        cin >> x >> str;

        int tot = 0;
        while (x.size() <= 100) {
            if(iss(x, str)) {
                cout << tot << endl;
                break;
            }
            if(x.size() > str.size() * 100) {
                cout << -1 << endl;
                break;
            }
            x += x;
            tot++;
        }
        if (!iss(x, str)) cout << -1 << endl;
        
    }

    return 0;
}