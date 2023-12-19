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
#define print(x) cout<<x<<endl;
#define REP(i,a,b) for ( int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int ram(int n, vector<pi>& vec1, vector<pi>& vec2, vector<pi>& vec3){
    int res = 0;
    REP(x, 0, 3) REP(y, 0, 3) REP(z, 0, 3) if (vec1[x].S != vec2[y].S && vec1[x].S != vec3[z].S && vec2[y].S != vec3[z].S) res = max(res, vec1[x].F + vec2[y].F + vec3[z].F);
    return res;
}

void hanuman(int n, vector<pi>& vec1, vector<pi>& vec2, vector<pi>& vec3) {
    sort(all(vec1), greater<pi>());
    sort(all(vec2), greater<pi>());
    sort(all(vec3), greater<pi>());

    int ans = ram(n, vec1, vec2, vec3);
    print(ans);
}

int main() {
    fast
    ll t;
    cin >> t;

    while (t--) {
        int size;
        cin >> size;

        vector<pi> v1(size), v2(size), v3(size);

        REP(i, 0, size) {
            cin >> v1[i].F;
            v1[i].S = i + 1;
        }

        REP(i, 0, size) {
            cin >> v2[i].F;
            v2[i].S = i + 1;
        }

        REP(i, 0, size) {
            cin >> v3[i].F;
            v3[i].S = i + 1;
        }

        hanuman(size, v1, v2, v3);
    }

    return 0;
}
