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
#define REP(i,a,b) for ( int i = a; i <= b; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_bfse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;



vector<string> rook(string p) {
    char col = p[0];
    int row = p[1] - '0';
    vector<string> moves;
    REP(i,1,8) if (i != row) moves.push_back(col + to_string(i));
    REP(i,1,8) {
        if (col + i <= 'h') moves.push_back(string(1, col + i) + to_string(row));
        if (col - i >= 'a') moves.push_back(string(1, col - i) + to_string(row));
        
    }

    return moves;
}

int main() {
    int t;cin >> t;

  
    while(t--){
        string p;
        cin >> p;
        vector<string> moves=rook(p);
        for (const auto &move : moves) cout << move << endl;
        
    }

    return 0;
}