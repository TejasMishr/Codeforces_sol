#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<char>> matrix(n, vector<char>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> matrix[i][j];
            }
        }

        // Count frequency of each character in the matrix
        vector<int> charCount(26, 0);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                charCount[matrix[i][j] - 'a']++;
            }
        }

        // Find the most frequent character
        int maxCount = 0;
        char mostFrequentChar;
        for (int i = 0; i < 26; ++i) {
            if (charCount[i] > maxCount) {
                maxCount = charCount[i];
                mostFrequentChar = 'a' + i;
            }
        }

        // Calculate the minimum number of operations required
        int minOperations = 0;
        for (int i = 0; i < 26; ++i) {
            if ('a' + i != mostFrequentChar) {
                minOperations += charCount[i];
            }
        }

        cout << minOperations << endl;
    }

    return 0;
}
