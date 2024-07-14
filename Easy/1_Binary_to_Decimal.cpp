int getDecimalValue(ListNode *head) {
    int res = 0;
    while(head) {
        res = res * 2 + head -> val;
        head = head -> next;
    }
    return res;
}