class Solution {
public:
    
    static bool chk(const vector<int>& nums, int i) {
        if (i <= 0 || i >= nums.size() - 1) return false;
        return nums[i] > nums[i-1] && nums[i] > nums[i+1];
    }

   
    class SegmentTree {
    private:
        vector<int> tree;
        int n;

        void build(const vector<int>& nums, int node, int start, int end) {
            if (start == end) { tree[node] = !chk(nums, start) ? 0 : 1; } 
            else {
                int mid = (start + end) / 2;
                build(nums, 2 * node + 1, start, mid);
                build(nums, 2 * node + 2, mid + 1, end);
                tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
            }
        }

        void update(const vector<int>& nums, int node, int start, int end, int idx) {
            if (start == end) { tree[node] = chk(nums, idx) ? 1 : 0;}
            else {
                int mid = (start + end) / 2;
                if (start <= idx && idx <= mid) { update(nums, 2 * node + 1, start, mid, idx); } 
                else { update(nums, 2 * node + 2, mid + 1, end, idx); }
                tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
            }
        }

        int que(int node, int start, int end, int low, int high) {
            if (high < start || end < low) { return 0; }
            if (low <= start && end <= high){ return tree[node]; }
            int mid = (start + end) / 2, left_query = que(2 * node + 1, start, mid, low, high), right_query = que(2 * node + 2, mid + 1, end, low, high);
            return left_query + right_query;
        }

    public:
        SegmentTree(const vector<int>& nums) {
            n = nums.size();
            tree.resize(4 * n);
            build(nums, 0, 0, n - 1);
        }

        void update(const vector<int>& nums, int idx) { update(nums, 0, 0, n - 1, idx); }

        int que(int low, int high) { return que(0, 0, n - 1, low, high);
        }
    };

    vector<int> countOfPeaks(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> ans;
        SegmentTree segTree(nums);

        for (const auto& que : queries) {
            if (que[0] == 1) {
                int low = que[1];
                int high = que[2];
                ans.push_back(segTree.que(low + 1, high - 1));
            } else if (que[0] == 2) {
                int idd = que[1];
                int val = que[2];
                nums[idd] = val;
                if (idd > 0) segTree.update(nums, idd - 1);
                segTree.update(nums, idd);
                if (idd < n - 1) segTree.update(nums, idd + 1);
            }
        }

        return ans;
    }
};