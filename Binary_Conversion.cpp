#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        string S, T;
        cin >> S >> T;
        
        int countS0 = 0, countS1 = 0, countT0 = 0, countT1 = 0;
        for (int i = 0; i < N; ++i) {
            if (S[i] == '0') countS0++;
            else countS1++;
            if (T[i] == '0') countT0++;
            else countT1++;
        }
        
        if (countS0 != countT0 || countS1 != countT1) {
            cout << "NO" << endl;
            continue;
        }
        
        int mismatchCount = 0;
        for (int i = 0; i < N; ++i) {
            if (S[i] != T[i]) mismatchCount++;
        }
        
        if (mismatchCount / 2 == K) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
