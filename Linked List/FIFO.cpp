#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
    int N, M;
    cin >> N >> M;
    
    long long sum = 0;
    vector<int> color(M);
    for (int i = 0; i < M; i++)
    {
        cin >> color[i];
        sum += color[i];
    }
    long long value1= N * M;
    long long value2= N * (M - 1);
    if (sum == value1) cout << N << endl;
    else if (sum < (value2 + 1))cout << 0 << endl;
    else cout << sum%N << endl;
    }

    return 0;
}