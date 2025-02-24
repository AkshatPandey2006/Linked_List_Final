ListNode *reverseKGroup(ListNode *head, int k) {
    ListNode *cursor = head;

    for(int i=0; i<k; i++) {
        if(cursor == nullptr) return head;
        cursor = cursor -> next;
    }

    ListNode *curr = head;
    ListNode *prev = nullptr;
    ListNode *next = nullptr;

    for(int i=0; i<k; i++) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }

    head -> next = reverseKGroup(curr, k);
    return prev;
}