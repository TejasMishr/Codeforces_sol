#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int x = 0; x < t; ++x) {
        int n, q;
        cin >> n >> q;
        vector<int> p(n);
        vector<int> a(n + 1, 0);

        for (int i = 1; i <= n; ++i) {
            cin >> p[i - 1];
            a[i] = p[i - 1];
        }

        for (int x = 0; x < q; ++x) {
            int k;
            cin >> k;
            int ans = 0;
            vector<int> c = a;

            for (int j = 60; j >= 0; --j) {
                int u = 0;
                vector<int> b = c;

                for (int i = 1; i <= n; ++i) {
                    if (!((c[i] >> j) & 1)) {
                        int temp = c[i];
                        c[i] += (1 << j);
                        c[i] /= (1 << j);
                        c[i] *= (1 << j);
                        u += (c[i] - temp);
                        if (u > k) {
                            break;
                        }
                    }
                }

                if (u <= k) {
                    k -= u;
                    ans += (1 << j);
                } else {
                    c = b;
                }
            }

            cout << ans << endl;
        }
    }

    return 0;
}
