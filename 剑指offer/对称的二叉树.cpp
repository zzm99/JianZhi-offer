// https://leetcode-cn.com/problems/dui-cheng-de-er-cha-shu-lcof/
class Solution {
public:
    bool twoSym(TreeNode* root1, TreeNode* root2){
        if(!root1 && !root2) return true;
        if(!root1 || !root2) return false;
        if(root1->val != root2->val) return false;
        return twoSym(root1->left, root2->right) && twoSym(root1->right, root2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return twoSym(root->left, root->right);
    }
};