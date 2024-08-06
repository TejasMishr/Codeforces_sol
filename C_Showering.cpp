#include <bits/stdc++.h>
using namespace std;
bool solve(vector<pair<long long, long long>>&a, long long n, long long s, long long m) {
    
    for (long long i = 1; i <a.size(); ++i) {
        long long diff = a[i].first - a[i - 1].second;
        if (diff>= s) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, s, m;
        cin >> n >> s >> m;
        vector<pair<long long, long long>>a(n);

        for (int i = 0; i < n; ++i) 
            cin >> a[i].first >> a[i].second;
        
        a.push_back({0,0});
        a.push_back({m, m});
        
        sort(a.begin(), a.end());
        
        if (solve(a, n, s, m)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}