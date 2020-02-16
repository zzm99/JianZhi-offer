// https://leetcode-cn.com/problems/shu-de-zi-jie-gou-lcof/
class Solution {
public:
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if(!A || !B) return false;
        if(A->val == B->val && isSub(A, B)) return true;
        return isSubStructure(A->left, B) || isSubStructure(A->right, B);
    }
    bool isSub(TreeNode* a, TreeNode* b){
        if(!b) return true;
        if(!a) return false;
        if(a->val != b->val) return false;
        return isSub(a->left, b->left) && isSub(a->right, b->right);
    }
};