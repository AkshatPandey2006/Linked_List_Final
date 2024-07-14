ListNode* removeNodes(ListNode* head) {
    ListNode *prev = nullptr, *curr = head;
    while (curr != nullptr) {
        swap(curr->next, prev);
        swap(prev, curr);
    }

    ListNode* dummyHead = new ListNode(-1);
    ListNode* tempPrev = dummyHead;
    curr = prev;

    while (curr != nullptr) {
        if (curr->val >= tempPrev->val) {
            tempPrev->next = curr;
            tempPrev = curr;
            curr = curr->next;
        } 
        else {
            curr = curr->next;
        }
    }
    tempPrev->next = nullptr;

    ListNode *newPrev = nullptr, *newCurr = dummyHead->next;
    while (newCurr != nullptr) {
        swap(newCurr->next, newPrev);
        swap(newPrev, newCurr);
    }

    return newPrev;
}