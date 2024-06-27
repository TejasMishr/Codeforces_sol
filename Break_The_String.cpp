#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    vector<int> results(T);

    for (int t = 0; t < T; ++t) {
        string S;
        cin >> S;
        int n = S.size();
        int count = 0;

        // Precompute prefix and suffix equality checks
        vector<int> prefix_counts(n + 1, 0);
        vector<int> suffix_counts(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            prefix_counts[i + 1] = prefix_counts[i] + (S.substr(0, i + 1) == S.substr(i + 1, i + 1));
        }

        for (int i = n - 1; i >= 0; --i) {
            suffix_counts[i] = suffix_counts[i + 1] + (S.substr(0, i) == S.substr(i, i));
        }

        for (int i = 0; i <= n; ++i) {
            count += prefix_counts[i] * suffix_counts[i];
        }

        results[t] = count;
    }

    for (const int& result : results) {
        cout << result << "\n";
    }

    return 0;
}
