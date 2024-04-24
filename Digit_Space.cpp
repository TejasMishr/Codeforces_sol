#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int size, m;
        cin >> size >> m;
        vector<int> a(size);
        for (int i = 0; i < size; i++) {
            cin >> a[i];
            a[i] = a[i]%m;
        }
        sort(a.begin(), a.end());
        
        int r = a[size-1]- a[0];
        
      
        
        for(int j=0; j<size-1; j++){
            r = min(r, a[j]+m - a[j+1]);
        }
        cout<<r<<endl;
    }
    return 0;
}