// https://leetcode-cn.com/problems/er-cha-sou-suo-shu-de-di-kda-jie-dian-lcof/
class Solution {
public:
    vector<int> ret;
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        ret.push_back(root->val);
        inorder(root->right);
    }
    int kthLargest(TreeNode* root, int k) {
        inorder(root);
        return ret[ret.size()-k];
    }
};