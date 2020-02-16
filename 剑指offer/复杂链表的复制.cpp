// https://leetcode-cn.com/problems/fu-za-lian-biao-de-fu-zhi-lcof/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return head;
        Node* node = head;
        while(node){
            Node* copy = new Node(node->val, NULL, NULL);
            copy->next = node->next;
            node->next = copy;
            node = copy->next;
        }
        node = head;
        while(node){
            if(node->random){
                node->next->random = node->random->next;
            }
            node = node->next->next;
        }
        node = head;
        Node* newHead = head->next;
        Node* newNode = newHead;
        while(node){
            node->next = node->next->next;
            if(newNode->next) newNode->next = newNode->next->next;
            node = node->next;
            newNode = newNode->next;
        }
        return newHead;
    }
};