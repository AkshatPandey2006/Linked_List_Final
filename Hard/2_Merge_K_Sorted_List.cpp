ListNode *mergeKLists(vector<ListNode*> &lists) {
    if(lists.empty()) {
        return nullptr;
    }
    return mergeKListsHelper(lists, 0, lists.size() - 1);
}

ListNode *mergeKListsHelper(vector<ListNode*> &lists, int start, int end) {
    if(start == end) {
        return lists[start];
    }
    if(start + 1 == end) {
        return merge(lists[start], lists[end]);
    }

    int mid = start + (end - start)/2;
    ListNode *left = mergeKListsHelper(list, start, mid);
    ListNode *right = mergeKListsHelper(list, mid + 1, end);
    return merge(left, right);
}

ListNode *merge(ListNode *l1, ListNode *l2) {
    ListNode *dummy = new ListNode(0);
    ListNode *curr = dummy;

    while(l1 and l2) {
        if(l1 -> val < l2 -> val) {
            curr -> next = l1;
            l1 = l1 -> next;
        }
        else {
            curr -> next = l2;
            l2 = l2 -> next;
        }
        curr = curr -> next;
    }

    curr -> next = l1 ? l1 : l2;
    return dummy -> next;
}