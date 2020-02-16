// https://leetcode-cn.com/problems/liang-ge-lian-biao-de-di-yi-ge-gong-gong-jie-dian-lcof/
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* pa = headA; int flaga = 0;
        ListNode* pb = headB; int flagb = 0;
        while(pa && pb){
            if(pa == pb) return pa;
            pa = pa->next; pb = pb->next;
            if(!pa) {
                if(flaga == 0)
                    pa = headB, flaga = 1;
                else
                    break;
            }
            if(!pb) {
                if(flagb == 0)
                    pb = headA, flagb = 1;
                else
                    break;
            }
        }
        return NULL;
    }
};