int countNodesinLoop(struct Node *head) {
    if (head == NULL || head->next == NULL) {
        return 0;
    }
    Node* slow = head;
    Node* fast = head;

    while (slow && fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            int count = 1;
            fast = fast->next; 
            
            while (slow != fast) {
                fast = fast->next;
                count++;
            }

            return count; 
        }
    }
    return 0;
}