ListNode *insertGCD(ListNode *head) {
    if(head == NULL) {
        return NULL;
    }

    if(head -> next == NULL) {
        return head;
    }

    ListNode *temp = head;

    while(temp -> next != NULL) {
        int num1 = temp -> val;
        int num2 = temp -> next -> val;

        int num = __gcd(num1, num2);

        ListNode *newNode = new ListNode(num);

        newNode -> next = temp -> next;
        temp -> next = newNode;
        temp = newNode -> next;
    }

    return head;
}