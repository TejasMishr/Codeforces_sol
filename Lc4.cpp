
class TrieNode {
public:
    int cost;
    unordered_map<char, TrieNode*> child;
    TrieNode() : cost(INT_MAX) {}
};

class Trie {
public:
    TrieNode* root;
    Trie() {root = new TrieNode();}
    
    void insert(const string& word, int cost) {
        TrieNode* nd = root;
        for (char c : word) {
            if (!nd->child.count(c)) nd->child[c] = new TrieNode();
            nd = nd->child[c];
        }
        nd->cost = min(nd->cost, cost);
    }
};

class Solution {
public:
    int minimumCost(string target, vector<string>& words, vector<int>& costs) {
        vector<int> dp(target.size() + 1, INT_MAX);
        dp[0] = 0;
        Trie trie;
        for (int i = 0; i < words.size(); i++) trie.insert(words[i], costs[i]);
        for (int i = 0; i < target.size(); i++) {
            if (dp[i] == INT_MAX) {
                continue;
            }
            TrieNode* nd = trie.root;
            for (int j = i; j < target.size(); ++j) {
                if (!nd->child.count(target[j])) {
                    break;
                }
                nd = nd->child[target[j]];
                if (nd->cost != INT_MAX) dp[j + 1] = min(dp[i] + nd->cost, dp[j + 1], );
            }
        }
        int ans=((dp[target.size()] == INT_MAX) ? -1 : dp[n]);
        return ans;
    }
};
    
