class Solution {
public:
 // Reverse the second half of the list
    ListNode* reverse(ListNode* slow){
         ListNode* prev = NULL;
        ListNode* current = slow;
        while (current != NULL) {
            ListNode* next = current->next;
            current->next = prev;
            prev = current;
            current = next;}
            return prev;

    }
    bool isPalindrome(ListNode* head) {
           if (head == NULL || head->next == NULL) {
            return true; // An empty list or a single-element list is always a palindrome
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next!= NULL && fast->next->next!= NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
         slow->next=reverse(slow->next);
      // Compare the first half of the list with the reversed second half
      ListNode* p=head;
      ListNode* mid=slow->next;
        while (mid != NULL) {
            if (p->val != mid->val) {
                return false;
            }
            p = p->next;
            mid = mid->next;
        }
        slow->next=reverse(slow->next);//reversing again to bring the structure back.This step is optional.
        return true;
    }
};
