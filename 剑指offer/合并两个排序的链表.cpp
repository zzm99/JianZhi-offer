// https://leetcode-cn.com/problems/he-bing-liang-ge-pai-xu-de-lian-biao-lcof/
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ret = new ListNode(-1);
        ListNode* p = ret;
        while(l1 && l2){
            if(l1->val < l2->val){
                ret->next = new ListNode(l1->val);
                l1 = l1->next;
            }else{
                ret->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            ret = ret->next;
        }
        while(l1){
            ret->next = new ListNode(l1->val);
            l1 = l1->next;
            ret = ret->next;
        }
        while(l2){
            ret->next = new ListNode(l2->val);
            l2 = l2->next;
            ret = ret->next;
        }
        return p->next;
    }
};