class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp;
        temp=node->next;
        node->val=temp->val;
        node->next=temp->next;
        
    }
};
