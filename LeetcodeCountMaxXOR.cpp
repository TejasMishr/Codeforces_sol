class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        const unsigned n = nums.size(), bitmask=(1<<n)-1;
        int cnt=0, maxi=0;

        for(int mask=1; mask<=bitmask; mask++){
            unsigned acc= 0;
            for(int j=0;j<n;j++){
                if((mask>>j) & 1) acc|=nums[j]; // I was Doing ERROR in shifting of Bits
            }

            if(acc>maxi) maxi=acc,cnt=1;
            else if(acc==maxi) cnt++;
        }

        return cnt;

    }
};
