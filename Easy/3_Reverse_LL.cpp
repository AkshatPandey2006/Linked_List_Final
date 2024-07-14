ListNode *reverseList(ListNode *head) {
    if(head == NULL or head -> next == NULL) {
        return head;
    }

    ListNode *newHead = reverseList(head -> next);
    head -> next -> next = head;
    head -> next = nullptr;
    return newHead;
}