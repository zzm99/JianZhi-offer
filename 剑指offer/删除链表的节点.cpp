// https://leetcode-cn.com/problems/shan-chu-lian-biao-de-jie-dian-lcof/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteNode(ListNode* head, int val) {
        ListNode* p = new ListNode(-1);
        p->next = head;
        ListNode* phead = p;
        while(p->next){
            cout << p->next->val << endl;
            if(p->next->val == val){
                ListNode* cur = p->next;
                p->next = cur->next;
                //delete cur;
                break;
            }else{
                p = p->next;
            }
        }
        return phead->next;
    }
};