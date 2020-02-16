// https://leetcode-cn.com/problems/er-cha-shu-zhong-he-wei-mou-yi-zhi-de-lu-jing-lcof/
class Solution {
public:
    vector<vector<int>> ret;
    void helper(TreeNode* root, int sum, int cursum, vector<int> cur){
        if(!root) return;
        cursum += root->val;
        cur.push_back(root->val);
        if(root->left == NULL && root->right == NULL){
            if(cursum == sum) ret.push_back(cur);
            return;
        } 
        helper(root->left, sum, cursum, cur);
        helper(root->right, sum, cursum, cur);
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> cur;
        helper(root, sum, 0, cur);
        return ret;
    }
};