ListNode* swapPairs(ListNode* head) {
    if(head == NULL)
        return NULL;
    if(head->next == NULL)
        return head;
        
    ListNode* next = head->next;
    head->next = swapPairs(next->next);
    next->next = head;
        
    return next;
}