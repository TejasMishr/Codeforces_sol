#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int k = 0; k < n; ++k) {
        long long int m;
        cin >> m;

        long long int i = 1,flag=0;
        while (i < m - 1) {
            long long int j = i;
            while (j < m - 1) {
                if (!((m - i) % (2 * j))) {
                    cout << 1 << " " << i << " " << (j * (m - i)) / (2 * j) << endl;
                    flag =1;
                    break;
                }
                j = 2 * j;
            }
            if(flag)break;
            i = i * 2;
        }

        if(!flag)cout << -1 << endl;
    }

    return 0;
}