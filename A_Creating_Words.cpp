#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string a, b;
        cin >> a >> b;
        
        // Swap the first characters
        swap(a[0], b[0]);
        
        // Output the results
        cout << a << " " << b << endl;
    }
    
    return 0;
}
