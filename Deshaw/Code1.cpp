#include <bits/stdc++.h>
#define pb push_back
#define int long long
using namespace std;

const int mod = 1e9+7;
const int N = 1e5 + 5;
const int K = 18;

vector<int> get(vector<int> diff){
    int idx = 0;
    map<int, int> mp, mp2;
    for(int i = 0; i < diff.size(); i++) mp[diff[i]]++;
    vector<int> vec;
    for(int i = 1; i <= diff.size(); i++) if(!mp[i]) vec.pb(i);

    vector<int> res = diff;
    
    for(int i = 0; i < diff.size(); i++){
        if(mp[diff[i]] > 1 || diff[i] > diff.size()){

            if(diff[i] < vec[idx] && !mp2[diff[i]]) mp2[diff[i]] = 1;
            
            else{
                res[i] = vec[idx], idx++;
                mp[diff[i]]--;
            }
        }
    }

    return res;
}

int32_t main(){
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> res = get(a);
    for(int i = 0; i < n; i++)  cout << res[i] << endl;
    return 0;
}
