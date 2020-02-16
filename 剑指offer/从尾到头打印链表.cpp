// https://leetcode-cn.com/problems/cong-wei-dao-tou-da-yin-lian-biao-lcof/
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        vector<int> ret;
        while(head){
            ret.push_back(head->val);
            head = head->next;
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};