int getMaximumXORFrequency(vector<int> arr, int val) {
    int n = arr.size(), maxi = 0;
    
    for(int i1 = 0; i1 < n; ++i1) {
        for (int j1 = i1; j1 < n; ++j1) {
            unordered_map<int, int> freq;
            int m = 0;
            for (int i = i1; i <= j1; ++i) m ^= arr[i];

            for (int i = i1; i <= j1; ++i) {
                int new_val = arr[i] ^ m;
                freq[new_val]++;
            }
            maxi = max(maxi, freq[val]);
        }
    }
    
    return maxi;
}


int getMaximumXORFrequency(vector<int> arr, int val) {
    int n = arr.size(), maxi = 0;

    
    for (int i1 = 0; i1 < n; ++i1) {
        unordered_map<int, int> freq;
        int m = 0;
        
        for (int j1 = i1; j1 < n; ++j1) {
            
            m ^= arr[j1];
            
            int new_val = arr[j1] ^ m;
            freq[new_val]++;
            maxi = max(maxi, freq[val]);
        }
    }

    return maxi;
}


int getMaximumXORFrequency(vector<int>& arr, int val) {
    int n = arr.size();
    vector<int> pre(n, 0);
    
    
    pre[0] = arr[0];
    for (int i = 1; i < n; ++i) pre[i] = pre[i - 1]^arr[i];
    
    int maxi = 0;

    
    for (int i1 = 0; i1 < n; ++i1) {
        for (int j1 = i1; j1 < n; ++j1) {
            int sub;
            if (i1 == 0) sub = pre[j1];
            else sub = pre[j1] ^ pre[i1 - 1];
            
            
            unordered_map<int, int> freq;
            for (int i = i1; i <= j1; ++i) {
                int tr = arr[i] ^ sub;
                freq[tr]++;
            }
            maxi = max(maxi, freq[val]);
        }
    }
    
    return maxi;
}



bool sub(int n, int k, vector<int> &arr) {
    vector<bool> pv(k + 1, false);
    pv[0] = true;

    if (arr[0] <= k) pv[arr[0]] = true;

    for (int ind = 1; ind < n; ind++) {
        vector<bool> cur(k + 1, false);
        cur[0] = true;

        for (int target = 1; target <= k; target++) {
            bool no = pv[target], ta = false;
            if (arr[ind] <= target)  ta = pv[target - arr[ind]];
            cur[target] = no || ta;
        }

        pv = cur;
    }

    return pv[k];
}

int main() {
    int k, n;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int res = INT_MAX;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            vector<int> subarray(arr.begin() + i, arr.begin() + j + 1);
            int subSize = subarray.size();
            if (sub(subSize, k, subarray)) res = min(res, j - i + 1);
        }
    }

    if (res == INT_MAX) cout << -1 << endl;
    else cout << res << endl;
    
    return 0;
}


int getMaximumXORFrequency(vector<int> &arr, int val)
{
    unordered_map<int, int> mp;
    int n = arr.size(), res = 0, pr = 0;
    for (int i = 0; i < n; ++i){
        pr ^= arr[i];
        if (mp.find(pr ^ val) != mp.end()) { 
            res = max(res, mp[pr ^ val] + 1);
        } 
        if (mp.find(pr) != mp.end()) mp[pr] = max(mp[pr], i - 1);
        else mp[pr] = i;
    }
    return res;
}


int getMaximumXORFrequency(vector<int> arr, int val) {
    int n = arr.size();
    int maxi = 0;
    
    for (int left = 0; left < n; ++left) {
        for (int right = left; right < n; ++right) {
            unordered_map<int, int> freqMap;
            int m = 0;
            for (int i = left; i <= right; ++i) {
                m ^= arr[i];
            }
            for (int i = left; i <= right; ++i) {
                int new_val = arr[i] ^ m;
                freqMap[new_val]++;
            }
            maxi = max(maxi, freqMap[val]);
        }
    }
    
    return maxi;
}



bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<bool> prev(k + 1, false);
    prev[0] = true;

    if (arr[0] <= k) {
        prev[arr[0]] = true;
    }

    for (int ind = 1; ind < n; ind++) {
        vector<bool> cur(k + 1, false);
        cur[0] = true;

        for (int target = 1; target <= k; target++) {
            bool notTaken = prev[target];
            bool taken = false;
            if (arr[ind] <= target) {
                taken = prev[target - arr[ind]];
            }
            cur[target] = notTaken || taken;
        }

        prev = cur;
    }

    return prev[k];
}

int main() {
    int k, n;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int res = INT_MAX;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            vector<int> subarray(arr.begin() + i, arr.begin() + j + 1);
            int subSize = subarray.size();
            if (subsetSumToK(subSize, k, subarray)) {
                res = min(res, j - i + 1);
            }
        }
    }

    if (res == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << res << endl;
    }

    return 0;
}




int solve(int i, int start, int k, int mxK, vector<int> &amount, vector<vector<vector<int>>> &dp)
{
    if (k == mxK)
        return i - start;

    if (i == amount.size() || k > mxK)
        return INT_MAX;

    if (dp[i][start + 1][k] != -1)
        return dp[i][start + 1][k];

    if (start == -1)
    {
        dp[i][start + 1][k] = min(solve(i + 1, i, k + amount[i], mxK, amount, dp), solve(i + 1, -1, k, mxK, amount, dp));
    }
    else
    {
        dp[i][start + 1][k] = min(solve(i + 1, start, k + amount[i], mxK, amount, dp), solve(i + 1, start, k, mxK, amount, dp));
    }

    return dp[i][start + 1][k];
}

int getSmallestSubarrayLength(vector<int> amount, int k)
{
    int n = amount.size();
    int sm = accumulate(amount.begin(), amount.end(), 0);
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(n + 1, vector<int>(sm + 1, -1)));
    int result = solve(0, -1, 0, k, amount, dp);
    return result == INT_MAX ? -1 : result;
}

int main()
{
    int k;
    cin >> k;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    cout << getSmallestSubarrayLength(arr, k) << endl;
}





long long minCost(vector<int>& a, vector<int>& b) {
        map<int,int>mp;
        int n=a.size(), mini=INT_MAX;
        for(int i=0;i<n;i++){
            mp[a[i]]++, mp[b[i]]--;
            mini = min(mini,a[i]);
            mini = min(mini,b[i]);
        }
        vector<int>vec;
        for(auto x : mp){
            int temp = x.second;
            if(temp % 2== 1) return -1;
            else for(int i=0;i<abs(temp)/2;i++) vec.push_back(x.first);
        }
        long long res=0;
        
        for(int i=0; i<vec.size()/2; i++) res += min(vec[i], 2 * mini);

        return res;
    } 



int mincost(vector<int> &pods,vector<int> &cost){
  map<int,multiset<int>> mp;
  for(int i=0;i<pods.size();i++) mp[pods[i]].insert(cost[i]);
  int res = 0, curr = (*mp.begin()).first,sm = 0;
  multiset<int> ms;
  while(1){
    if(ms.size()==0){
      if(mp.lower_bound(curr) == mp.end()) break;
      curr = (*mp.lower_bound(curr)).first;
    }

    if(mp.find(curr) != mp.end())
    for(auto &x:mp[curr]){
        ms.insert(x);
        sm += x;
    }

    auto it = ms.end();
    it--, sm -= *it, res += sm;
    ms.erase(it);
    curr++;
  }

  return res;
}




def maximize_arithmetic_means(arr, k):
    n = len(arr)
    prefix_sum = [0] * (n + 1)
    
    for i in range(1, n + 1):
        prefix_sum[i] = prefix_sum[i-1] + arr[i-1]
    
    dp = [0] * (n + 1)

    for j in range(1, k + 1):
        new_dp = [0] * (n + 1)
        for i in range(j, n + 1):
            if j == 1:
                new_dp[i] = prefix_sum[i] / i
            else:
                max_val = 0
                for m in range(j - 1, i):
                    current_mean = (prefix_sum[i] - prefix_sum[m]) / (i - m)
                    max_val = max(max_val, dp[m] + current_mean)
                new_dp[i] = max_val
        dp = new_dp

    return int(dp[n])



bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int countVowelSubstrings(string word) {
    int res = 0;
    
    for (int i = 0; i < word.length(); i++) {
        unordered_set<char> s;
        
        
        if (isVowel(word[i])) {
            for (int j = i; j < word.length(); j++) {
                if (isVowel(word[j])) {
                    s.insert(word[j]); 
                    if (s.size() == 5) res++; 
                } else {
                    break;  
                }
            }
        }
    }
    
    return res;
}



string solve(int m, vector<string> s) {
    int res = 0;
    
    if (m == 0) {
        for (int i = 0; i < s.size(); i++) res +=s[i].length();
        return res % 2 == 0;
    }
    
    for (int i=0; i<s.size(); i++) {
        bool chk = false;
        for (int j=0; j<s[i].size(); j++) {
            if ((s[i][j] - 'a')%2) {
                chk = true;
                break;
            }
        }
        
        if(!chk) res++;
    }
    
    return res%2 == 0 ? "EVEN" : "ODD";
}

