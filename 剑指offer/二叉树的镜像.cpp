// https://leetcode-cn.com/problems/er-cha-shu-de-jing-xiang-lcof/
class Solution {
public:
    TreeNode* mirrorTree(TreeNode* root) {
        if(!root) return root;
        TreeNode* ret = new TreeNode(root->val);
        ret->left = mirrorTree(root->right);
        ret->right = mirrorTree(root->left);
        return ret;
    }
};