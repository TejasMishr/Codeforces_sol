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
int maxCoins(string s) {
    int count_AB = 0;  // Count of non-overlapping AB occurrences
    int count_BA = 0;  // Count of non-overlapping BA occurrences
    
    int i = 0;
    while (i < s.length() - 1) {
        if (s.substr(i, 2) == "AB") {
            count_AB++;
            i += 2;
        } else if (s.substr(i, 2) == "BA") {
            count_BA++;
            i += 2;
        } else {
            i++;
        }
    }
    
    // Return the maximum of the two counts as the maximum number of coins that can be obtained
    return max(count_AB, count_BA);
}

int main() {
    int t;  // Number of test cases
    cin >> t;

    while (t--) {
        string s;  // Input string
        cin >> s;
        int result = maxCoins(s);
        cout << result << endl;
    }

    return 0;
}