class Solution {
public:
    void jadu(vector<int>& nums, vector<vector<int>>& dp, int i, int j) {
        for (int idx = 0; idx < i; idx++) dp[i][j] = max(dp[i][j], (nums[idx] == nums[i]) ? (dp[idx][j] + 1) : (j > 0 ? (dp[idx][j - 1] + 1) : 1));
    }

    int maximumLength(std::vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> dp(nums.size(),vector<int>(k + 1, 1));

        int maxi = 1;
        for (int idx = 1; idx < n; ++idx) for (int len = 0; len <= k; ++len) jadu(nums, dp, idx, len), maxi = max(maxi, dp[idx][len]);

        return maxi;
    }
};