#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define pb push_back
#define REP(i, a, b) for (ll i = a; i < b; ++i)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define print(x) cout << x << "\n";

vector<int> read_input() {
    vector<int> result;
    int num;
    while (cin >> num) {
        result.push_back(num);
        if (cin.peek() == '\n') break;
    }
    return result;
}

int find_maxi(const vector<vector<pair<ll, ll>>>& grouped_frequencies, ll k) {
    ll max_sum = 0;
    for (const auto& group : grouped_frequencies) {
        ll current_sum = 0;
        if (group.size() <= k) {
            current_sum = 0;
            for (const auto& elem : group) {
                current_sum += elem.second;
            }
            max_sum = max(max_sum, current_sum);
        } else {
            current_sum = 0;
            for (ll i = 0; i < k; ++i) {
                current_sum += group[i].second;
            }
            max_sum = max(max_sum, current_sum);
            for (size_t i = k; i < group.size(); ++i) {
                current_sum += group[i].second - group[i - k].second;
                max_sum = max(max_sum, current_sum);
            }
        }
    }
    return max_sum;
}

vector<vector<pair<ll, ll>>> grp_cons(const map<ll, ll>& freq_map) {
    vector<pair<ll, ll>> freq_vec(freq_map.begin(), freq_map.end());
    vector<vector<pair<ll, ll>>> grouped;
    vector<pair<ll, ll>> current_group = {freq_vec[0]};

    for (size_t i = 1; i < freq_vec.size(); ++i) {
        if (freq_vec[i].first == freq_vec[i - 1].first + 1) {
            current_group.push_back(freq_vec[i]);
        } else {
            grouped.push_back(current_group);
            current_group = {freq_vec[i]};
        }
    }

    grouped.push_back(current_group);
    return grouped;
}

ll sol() {
    ll n, k;
    cin >> n >> k;
    vll arr(n);
    mll freq;

    REP(i, 0, n) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    auto grouped_frequencies = grp_cons(freq);
    ll ans = find_maxi(grouped_frequencies, k);

    return ans;
}

int main() {
    fast;
    ll t;
    cin >> t;
    while (t--) {
        print(sol());
    }
    return 0;
}
