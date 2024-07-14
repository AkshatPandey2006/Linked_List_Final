ListNode *inverse(ListNode *head) {
    ListNode *temp;
    ListNode *curr = head;
    ListNode *prev = NULL;

    while(curr) {
        temp = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = temp;
    }

    return prev;
}

int pairSum(ListNode *head) {
    if(head == NULL) return 0;
    if(head -> next -> next == NULL) return head -> val + head -> next -> val;

    ListNode *fast = head;
    ListNode *slow = head;
    while(fast) {
        fast = fast -> next -> next;
        slow = slow -> next;
    }

    ListNode *head1 = inverse(slow);

    int x = 0;
    while(head and head1) {
        x = max(x, head1 -> val + head -> va;);
        head = head -> next;
        head1 = head1 -> next;
    }

    return x;
}