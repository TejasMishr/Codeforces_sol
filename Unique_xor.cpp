#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define REP(i, a, b) for (int i = a; i < b; i++)
#define int long long int
#define pb push_back
#define vi vector<int>
#define endl "\n"
#define all(p) p.begin(), p.end()
#define ff first
#define ss second
#define rep(i, l, r) for(int i = l; i < r; i++)
#define pin pair<int, int>
#define vpin vector<pin>
#define yes() cout << "YES" << endl
#define no() cout << "NO" << endl
#define print(a) for(auto x : a) cout << x << " "; cout << endl
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
const int N = 1e9+7;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;cin >> s;
        vi o(k, 0);
        vi z(k, 0);
        
        // Count '1's and '0's in each group
        REP(i,0,n){
            int ind = i % k;
            if(s[i] == '0') {
                z[ind]++;
            } else {
                o[ind]++;
            }
        }
        
        int ans1 = 0; 
        int ans2 = 0;
        REP(i,0,k){
            if(o[i] & 1) ans1 += 1 + (o[i] + 1) / 2;
             else ans1 += (o[i] / 2);
        }
        REP(i,0,k){
            if(o[i] == 0) {
                ans2 = INT_MAX;
                break;
            } 
            else  ans2 += z[i];
        }
        cout << min(ans1, ans2) << endl;
    }
    
    return 0;
}
