// https://leetcode-cn.com/problems/cong-shang-dao-xia-da-yin-er-cha-shu-ii-lcof/
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ret;
        while(!q.empty()){
            int size = q.size();
            vector<int> curr;
            for(int i=0; i<size; i++){
                TreeNode* c = q.front(); q.pop();
                curr.push_back(c->val);
                if(c->left) q.push(c->left);
                if(c->right) q.push(c->right);
            }
            ret.push_back(curr);
        }
        return ret;
    }
};