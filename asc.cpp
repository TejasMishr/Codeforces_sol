#include <bits/stdc++.h>
using namespace std;

int happyPrincipal(vector<int>& A) {
    int n = A.size();
    int ans = 0;
    int prev = A[0];
    int count = 0;

    for (int i = 1; i < n; i++) {
        if (A[i] >= prev) {
            ans += (A[i] - prev);
            prev = A[i];
            count++;
        }
    }

    return count;
}
