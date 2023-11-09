#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        int n;
        cin >> n; // Number of elements in the array
        
        vector<int> arr(n);
        
        // Input array elements
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        // Find the GCD of all elements in the array
        int gcd = arr[0];
        for (int i = 1; i < n; i++) {
            gcd = __gcd(gcd, arr[i]);
        }
        
        // Check if all elements are divisible by the GCD
        bool possible = all_of(arr.begin(), arr.end(), [gcd](int x) {
            return x % gcd == 0;
        });
        
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
