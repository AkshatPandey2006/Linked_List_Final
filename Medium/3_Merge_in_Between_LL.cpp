ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2) {
    ListNode *ptr = list1;
    for(int i=0; i<a-1; i++) {
        ptr = ptr -> next;
    }

    ListNode *qtr = ptr -> next;
    for(int i=0; i<b-a+1; i++) {
        qtr = qtr -> next;
    }

    ptr -> next = list2;
    while(list2 -> next) {
        list2 = list2 -> next;
    }

    list2 -> next = qtr;
    return list1;
}