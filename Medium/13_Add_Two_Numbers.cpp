ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *dummy = new ListNode(0);
    ListNode *res = dummy;
    int total = 0;
    int carry = 0;

    while(l1 or l2 or carry) {
        total = carry;

        if(l1) {
            total += l1 -> val;
            l1 = l1 -> next;
        }
        if(l2) {
            total += l2 -> val;
            l2 = l2 -> next;
        }

        int num = total % 10;
        carry = total/10;
        res -> next = new ListNode(num);
        res = res -> next;
    }

    return dummy -> next;
}