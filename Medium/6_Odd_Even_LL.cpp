ListNode *oddEvenList(ListNode *head) {
    if(!head or !head -> next or !head -> next -> next) return head;

    ListNode *odd = head;
    ListNode *even = head -> next;
    ListNode *evenStart = head -> next;

    while(odd -> next and even -> next) {
        odd -> next = even -> next;
        even -> next = odd -> next -> next;
        odd = odd -> next;
        even = even -> next;
    }

    odd -> next = evenStart;
    return head;
}