ListNode *deleteMiddle(ListNode *head) {
    if(head -> next == NULL) {
        return NULL;
    }

    ListNode *slow = head;
    ListNode *fast = head -> next -> next;

    while(fast and fast -> next) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    slow -> next = slow -> next -> next;
    return head;
}