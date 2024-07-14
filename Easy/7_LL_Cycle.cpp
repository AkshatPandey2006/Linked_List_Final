bool hasCycle(ListNode *head) {
    ListNode *fast = head;
    ListNode *slow = head;

    while(fast != nullptr and fast -> next != nullptr) {
        fast = fast -> next -> next;
        slow = slow -> next;
        
        if(fast == slow) {
            return true;
        }
    }

    return false;
}