#include <iostream>
#include <vector>
#include <set>

using namespace std;

const int MAXN = 300005;
vector<int> adj[MAXN];
int pos[MAXN], f[MAXN], parent[MAXN];
set<int> s[MAXN];
int bad;

void dfs(int v) {
    f[v] = 1;
    for (int u : adj[v]) {
        dfs(u);
        f[v] += f[u];
    }
}

bool calc(int i) {
    return !s[i].empty() && *s[i].begin() < pos[i];
}

void del(int i, int x) {
    bad -= calc(i);
    s[i].erase(x);
    bad += calc(i);
}

void add(int i, int x) {
    bad -= calc(i);
    s[i].insert(x);
    bad += calc(i);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        
        // Reset global variables for each test case
        bad = 0;
        for (int i = 0; i < n; i++) {
            adj[i].clear();
            s[i].clear();
        }
        
        // Reading input
        for (int i = 1; i < n; i++) {
            cin >> parent[i];
            parent[i]--;
            adj[parent[i]].push_back(i);
        }

        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
            p[i]--;
            pos[p[i]] = i;
        }
        
        // DFS to calculate subtree sizes
        dfs(0);
        
        // Initial bad count calculation
        for (int i = 1; i < n; i++) {
            s[parent[i]].insert(pos[i]);
        }
        for (int i = 0; i < n; i++) {
            bad += calc(i);
        }

        // Processing queries
        while (q--) {
            int x, y;
            cin >> x >> y;
            x--; y--;

            // Elements to be swapped
            int u = p[x], v = p[y];
            if (u == v) {
                cout << (bad == 0 ? "YES" : "NO") << '\n';
                continue;
            }

            // Elements to consider for bad updates
            set<int> change = {u, v};
            if (parent[u] != -1) change.insert(parent[u]);
            if (parent[v] != -1) change.insert(parent[v]);

            // Update bad count before the swap
            for (int i : change) {
                if (i != u) del(parent[i], pos[i]);
                if (i != v) del(parent[i], pos[i]);
            }

            // Swap positions
            swap(p[x], p[y]);
            pos[u] = y;
            pos[v] = x;

            // Update bad count after the swap
            for (int i : change) {
                if (i != u) add(parent[i], pos[i]);
                if (i != v) add(parent[i], pos[i]);
            }

            // Check if the current permutation is a valid DFS order
            cout << (bad == 0 ? "YES" : "NO") << '\n';
        }
    }
    return 0;
}
