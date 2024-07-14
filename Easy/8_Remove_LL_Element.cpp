ListNode *removeElement(ListNode *head, int val) {
    if(head == nullptr) return head;
    while(head != nullptr and head -> val == val) {
        head = head -> next;
    }

    ListNode *curr = head;
    while(curr != nullptr and curr -> next != nullptr) {
        if(curr -> next -> val == val) {
            curr -> next = curr -> next -> next;
        }
        else {
            curr = curr -> next;
        }
    }

    return head;
}