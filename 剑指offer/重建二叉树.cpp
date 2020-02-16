// https://leetcode-cn.com/problems/zhong-jian-er-cha-shu-lcof/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder, inorder, 0, preorder.size()-1, 0, inorder.size()-1);
    }
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int a, int b, int c, int d){
        if(a > b || c > d) return NULL;
        TreeNode* root = new TreeNode(preorder[a]);
        int i=c-1;
        while(i < d && inorder[++i] != preorder[a]);
        root->left = build(preorder, inorder, a+1, a+i-c, c, i-1);
        root->right = build(preorder, inorder, a+i-c+1, b, i+1, d);
        return root;
    }
};