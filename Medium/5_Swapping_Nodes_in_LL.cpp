ListNode *swapNodes(ListNodes *head, int k) {
    ListNode *left = head;
    ListNode *right = head;

    for(int i=0; i<k-1; i++) {
        right = right -> next;
    }

    ListNode *end = right;
    while(right -> next) {
        left = left -> next;
        right = right -> next;
    }

    swap(end -> val, left -> val);
    return head;
}