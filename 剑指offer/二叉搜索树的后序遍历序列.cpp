// https://leetcode-cn.com/problems/er-cha-sou-suo-shu-de-hou-xu-bian-li-xu-lie-lcof/
class Solution {
public:
    bool verifyPostorder(vector<int>& postorder) {
        if(postorder.size() <= 1) return true;
        return helper(postorder, 0, postorder.size()-1);
    }
    bool helper(vector<int>& postorder, int a, int b){
        if(a >= b) return true;
        int i=a;
        for(; i<b; i++){
            if(postorder[i] > postorder[b]) break;
        }
        int c = i;
        for(; i<b; i++){
            if(postorder[i] < postorder[b]) return false;
        }
        return helper(postorder, a, c-1) && helper(postorder, c, b-1);
    }
};