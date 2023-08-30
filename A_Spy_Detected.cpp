#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; ++i) {
            cin >> ar[i];
        }
        
        // Initialize the result variable to store the index
        int result = -1;

        // Check XOR between adjacent elements
        for (int i = 1; i < n - 1; ++i) {
            if ((ar[i - 1] ^ ar[i]) != 0 && (ar[i] ^ ar[i + 1]) != 0) {
                result = i + 1;
                break;
            }
        }
        
        // Check for the first and last elements
        if (result == -1) {
            if ((ar[0] ^ ar[1]) != 0) {
                result = 1;
            } else if ((ar[n - 1] ^ ar[n - 2]) != 0) {
                result = n;
            }
        }

        cout << result << "\n";
    }
    return 0;
}
