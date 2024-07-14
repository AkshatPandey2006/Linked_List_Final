ListNode *middleNode(ListNode *head) {
    ListNode *slow = head;
    ListNode *head = head;

    while(fast != NULL and fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    return slow;
}