// https://leetcode-cn.com/problems/cong-shang-dao-xia-da-yin-er-cha-shu-lcof/submissions/
class Solution {
public:
    vector<int> levelOrder(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<int> ret;
        while(!q.empty()){
            int size = q.size();
            for(int i=0; i<size; i++){
                TreeNode* c = q.front(); q.pop();
                ret.push_back(c->val);
                if(c->left) q.push(c->left);
                if(c->right) q.push(c->right);
            }
        }
        return ret;
    }
};