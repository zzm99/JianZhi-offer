// https://leetcode-cn.com/problems/er-cha-shu-de-shen-du-lcof/
class Solution {
public:
    int maxlen = 0;
    void dfs(TreeNode* root, int curlen){
        maxlen = max(maxlen, curlen);
        if(!root) return;
        dfs(root->left, curlen+1);
        dfs(root->right, curlen+1);
    }
    int maxDepth(TreeNode* root) {
        dfs(root, 0);
        return maxlen;
    }
};