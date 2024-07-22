class Solution {
public:
    long long minimumOperations(vector<int>& nums, vector<int>& target) {
        long long mini = 0, ans = 0;
        int n = nums.size();
        vector<int> vec(n, 0);
        
        
        for (int i = 0; i < n; i++) vec[i] = target[i] - nums[i];

        int pos = 0;
        
        
        ans = abs(vec[0]);
        mini = ans;
        pos = vec[0] >= 0 ? 1 : 0;

        for (int i = 1; i < n; i++) {
            if ((vec[i] < 0 && pos == 1) || (vec[i] >= 0 && pos == 0)) {
                mini = abs(vec[i]);
                ans += abs(vec[i]);
                (vec[i] >= 0) ? pos= 1 : pos=0;
                continue;
            }
            if (mini >= abs(vec[i])) mini = abs(vec[i]);
            
            else {
                ans += abs(vec[i]) - mini;

                mini = abs(vec[i]);
            }
        }
        
        return ans;
    }
};