class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
  ListNode* result = new ListNode(0);
    ListNode* ptr = result;

    int carry = 0;

    while (l1 != nullptr || l2 != nullptr) {
        int sum = 0 + carry;

        if (l1 != nullptr) {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2 != nullptr) {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;
        sum = sum % 10;
        ptr->next = new ListNode(sum);
        ptr = ptr->next;
    }

    if (carry == 1)
        ptr->next = new ListNode(1);

    return result->next;
}
}
