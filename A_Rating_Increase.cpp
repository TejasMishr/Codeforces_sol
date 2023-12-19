//----------------> JAI SHREE RAM <------------- //
#include<bits/stdc++.h>
using namespace std;
// Code Shortners
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F 


#define S second
#define pb push_back
#define mp make_ pair
#define len(s) (int)s.size()
#define print(x) cout<<x<<endl;
#define REP(i,a,b) for ( int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_bfse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;
//pii val(const string& s) {
//     REP(i,0,s.length(){
//         
//         }
//     }

//     return make_pair(-1, -1);
// }

int main() {
    int t;cin >> t;

    while (t--) {
        string s;cin >> s;
        int n = s.length(),a = -1, b = -1;
        REP(i,1,n){
            string a_str = s.substr(0, i),b_str = s.substr(i);
            int newA = stoi(a_str),newB = stoi(b_str);

            if (newA > 0 && newB > 0 && newB > newA && a_str[0] != '0' && b_str[0] != '0') {
                a = newA;
                b = newB;
                break;
            }
        }
        cout << (a != -1 ? to_string(a) + " " + to_string(b) : "-1") << endl;

    }

    return 0;
}