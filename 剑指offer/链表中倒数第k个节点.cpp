// https://leetcode-cn.com/problems/lian-biao-zhong-dao-shu-di-kge-jie-dian-lcof/
class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode* first = head;
        ListNode* second = head;
        for(int i=0; i<k; i++) first = first->next;
        while(first){ first = first->next; second = second->next;}
        return second;
    }
};