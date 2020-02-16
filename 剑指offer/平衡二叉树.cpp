// https://leetcode-cn.com/problems/ping-heng-er-cha-shu-lcof/
class Solution {
public:
    void dfs(TreeNode* root, int curlen, int &maxlen){
        maxlen = max(curlen, maxlen);
        if(!root) return;
        dfs(root->left, curlen+1, maxlen);
        dfs(root->right, curlen+1, maxlen);
    }
    int maxDepth(TreeNode* root) {
        int ret = 0;
        dfs(root, 0, ret);
        return ret;
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int l = maxDepth(root->left);
        int r = maxDepth(root->right);
        if(abs(l-r) > 1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};