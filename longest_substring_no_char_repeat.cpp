class KthLargest {
private:
    priority_queue<int, vector<int>, greater<int>> pq;
    int k;
public:
    KthLargest(int _k, vector<int>& nums) {
        k = _k;
        for (int num: nums) {
            add(num);
        }
    }
    
    int add(int val) {
        if (pq.size() < k) {
            pq.push(val);
        } else if (val > pq.top()) {
            pq.pop();
            pq.push(val);
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

class Solution {
public:
    bool isIsomorphic(string s1, string s2) {
        unordered_map<char, char> m;
        unordered_set<char> s;
        for (int i = 0; i < s1.length(); ++i) {
            if (m[s1[i]] == s2[i]) {
                continue;
            }
            if (m.find(s1[i]) != m.end() && m[s1[i]] != s2[i]) {
                return false;
            }
            if (s.find(s2[i]) != s.end()) {
                return false;
            }
            s.insert(s2[i]);
            m[s1[i]] = s2[i];
        }
        return true;
    }
};
