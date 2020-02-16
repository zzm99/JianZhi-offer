// https://leetcode-cn.com/problems/er-cha-sou-suo-shu-yu-shuang-xiang-lian-biao-lcof/
class Solution {
public:
    Node* treeToDoublyList(Node* root) {
        if(!root) return root;
        stack<Node*> st;
        Node *pre = NULL, *head = root;
        while(root || !st.empty()){
            if(root){
                st.push(root);
                root = root->left;
            }else{
                root = st.top(); st.pop();
                if(!pre){
                    pre = root;
                    head = root;
                }else{
                    pre->right = root;
                    root->left = pre;
                    pre = root;
                }
                root = root->right;
            }
        } 
        head->left = pre;
        pre->right = head;
        return head;
    }
};