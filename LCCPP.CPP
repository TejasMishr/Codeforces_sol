class Solution {
public:
    int maxScore(int n, int k, vector<vector<int>>& src, vector<vector<int>>& tsrc) {

        if(n==k) return 0;
        pair<vector<vector<int>>, vector<vector<int>>> fvpair = {src, tsrc};

        vector<vector<int>> dp(k+1, vector<int>(n,0));

        for (int i = 0; i < k; ++i) {
            vector<int> nxt(n, 0);
            
            for (int j = 0; j < n; ++j) {
                nxt[j] = max(nxt[j], dp[i][j] + src[i][j]);

                for (int k = 0; k<n; ++k) {
                    if (k != j) {
                        int temp=dp[i][j] + tsrc[j][k];
                        nxt[k] = max(nxt[k], temp);
                    }
                }
            }
            dp[i+1] = nxt;
        }

        int maxm = 0;
        for (int i : dp[k]) maxm = max(maxm, i);
        return maxm;
    }
};
