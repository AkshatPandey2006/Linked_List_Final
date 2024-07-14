ListNode *mergeNodes(ListNode *head) {
    ListNode *dummy = new ListNode(0);
    ListNode *node = dummy;
    ListNode *temp = head;

    temp = temp -> next;
    int sum = 0;

    while(temp != NULL) {
        while(temp -> val != 0) {
            sum += temp -> val;
            temp = temp -> next;
        }

        node -> next = new ListNode(sum);
        node = node -> next;
        temp = temp -> next;
        sum = 0;
    }

    return dummy -> next;
}