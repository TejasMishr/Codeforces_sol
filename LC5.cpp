class Solution {
public:
    int minChanges(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> mp;
        vector<int> lst;
        int n = nums.size();

        for (int i = 0; i < n / 2; i++) {
            int a = nums[i], b = nums[n - i - 1];
            int dif = abs(a - b), xx = max({a, b, k - a, k - b});
            mp[dif].push_back(xx);
            lst.push_back(xx);
        }

        int ans = n;
        sort(lst.begin(), lst.end());

        for (auto &en : mp) {
            int dif = en.first;
            vector<int> &values = en.second;
            int srt = lower_bound(lst.begin(), lst.end(), dif) - lst.begin();
            srt = srt * 2 + (n / 2 - srt);

            for (int xx : values) (xx < dif) ? srt -= 2 : srt -= 1;

            ans = min(ans, srt);
        }

        return ans;
        
    }
};
