int countNodesinLoop(struct Node *head)
{
    
    struct Node* slow = head;  // Slow pointer moves one node at a time
        struct Node* fast = head;  // Fast pointer moves two nodes at a time

        // Move the pointers until they meet or reach the end of the list
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            // If the pointers meet, a loop is detected
            if (slow == fast)
                break;
        }
         int count = 0;
        if (fast != nullptr && fast->next != nullptr) {
            struct Node* temp = slow;
            do {
                temp = temp->next;
                count++;
            } while (temp != slow);
        }

        return count;
}
