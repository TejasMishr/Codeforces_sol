#include <iostream>
#include <vector>
#include <unordered_map>
#define int long long 
#define vi vector<int>
using namespace std;

class Tracker {
private:
    int n;
    vector<int> rowXor;
    vector<int> colXor;
    vector<vi> grid;

    void updateXor(int r, int c, int s, bool add) {
        if (add) {
            rowXor[r] ^= s;
            colXor[c] ^= s;
        } else {
            rowXor[r] ^= s;
            colXor[c] ^= s;
        }
    }
    
    int countAttackable() {
        int count = 0;
        for (int r = 1; r <= n; ++r) {
            for (int c = 1; c <= n; ++c) {
                if ((rowXor[r] ^ colXor[c]) > 0) {
                    ++count;
                }
            }
        }
        return count;
    }

public:
    Tracker(int N) : n(N), rowXor(N + 1, 0), colXor(N + 1, 0), grid(N + 1, vector<int>(N + 1, 0)) {}

    void addPanda(int r, int c, int s) {
        if (grid[r][c] > 0) {
            updateXor(r, c, grid[r][c], false);
        }
        grid[r][c] = s;
        updateXor(r, c, s, true);
    }

    void movePanda(int r1, int c1, int r2, int c2) {
        if (grid[r1][c1] > 0) {
            updateXor(r1, c1, grid[r1][c1], false);
            addPanda(r2, c2, grid[r1][c1]);
            grid[r1][c1] = 0;
        }
    }

    void processMove(int r1, int c1, int r2, int c2) {
        movePanda(r1, c1, r2, c2);
        cout << countAttackable() << endl;
    }
};

signed main() {
    int N, P, M;
    cin >> N >> P >> M;

    Tracker trk(N);

    for (int i = 0; i < P; ++i) {
        int r, c, s;
        cin >> r >> c >> s;
        trk.addPanda(r, c, s);
    }

    for (int i = 0; i < M; ++i) {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        trk.processMove(r1, c1, r2, c2);
    }

    return 0;
}