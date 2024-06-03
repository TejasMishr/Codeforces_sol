#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>
#define REP(i, a, b) for (int i = a; i < b; ++i)

void solve() {
    int n;
    cin >> n;
    vll a(n), b(n);
    REP(i, 0, n) cin >> a[i];
    REP(i, 0, n) cin >> b[i];
    
    int m;
    cin >> m;
    map<ll, int> mp;
    REP(i, 0, m) {
        ll d;
        cin >> d;
        mp[d]++;
    }

    map<ll, int> error, correct, correct1;
    REP(i, 0, n) {
        if (a[i] != b[i]) {
            error[b[i]]++;
        } else {
            correct1[b[i]]++;
        }
    }

    REP(i, 0, m) {
        correct[d[i]]++;
    }

    bool flag = true;
    int sum = 0;
    for (auto it : error) {
        if (error[it.first] > correct[it.first]) {
            flag = false;
            break;
        } else {
            sum += error[it.first];
        }
    }

    if (m - sum > 0) {
        for (auto it : correct1) {
            if (!correct[it.first]) {
                flag = false;
                break;
            }
        }
    }

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
