#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define vvi vector<vector<int>>
#define REP(i, a, b) for (int i = a; i < b; i++)

bool is_bound(pii tp, int n, int m) {
    int i = tp.first, j = tp.second;
    return i >= 0 && i < n && j >= 0 && j < m;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        REP(i, 0, n) {
            cin >> v[i];
        }
        vvi g(n, vector<int>(m, 0));
        map<int, int> mp;
        int ans = 0, x = 1;
        vector<pii> dirs2 = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        REP(i, 0, n) {
            REP(j, 0, m) {
                if (v[i][j] == '#' && g[i][j] == 0) {
                    queue<pii> q;
                    q.push({i, j});
                    while (!q.empty()) {
                        pii tp = q.front();
                        q.pop();
                        if (!is_bound(tp, n, m)) {
                            continue;
                        }
                        if (v[tp.first][tp.second] == '.' || g[tp.first][tp.second] != 0) {
                            continue;
                        }
                        g[tp.first][tp.second] = x;
                        mp[x]++;
                        for (auto nxt : dirs2) {
                            q.push({tp.first + nxt.first, tp.second + nxt.second});
                        }
                    }
                    ans = max(ans, mp[x]);
                    x++;
                }
            }
        }
        REP(i, 0, n) {
            int ta = 0;
            set<int> s;
            REP(j, 0, m) {
                if (v[i][j] == '#') {
                    s.insert(g[i][j]);
                } else {
                    ta++;
                    if (i > 0 && v[i - 1][j] == '#') {
                        s.insert(g[i - 1][j]);
                    }
                    if (i + 1 < n && v[i + 1][j] == '#') {
                        s.insert(g[i + 1][j]);
                    }
                }
            }
            for (int x : s) {
                ta += mp[x];
            }
            ans = max(ans, ta);
        }

        REP(j, 0, m) {
            int ta = 0;
            set<int> s;
            REP(i, 0, n) {
                if (v[i][j] == '#') {
                    s.insert(g[i][j]);
                } else {
                    ta++;
                    if (j > 0 && v[i][j - 1] == '#') {
                        s.insert(g[i][j - 1]);
                    }
                    if (j + 1 < m && v[i][j + 1] == '#') {
                        s.insert(g[i][j + 1]);
                    }
                }
            }
            for (int x : s) {
                ta += mp[x];
            }
            ans = max(ans, ta);
        }
        cout << ans << endl;
    }
    return 0;
}
