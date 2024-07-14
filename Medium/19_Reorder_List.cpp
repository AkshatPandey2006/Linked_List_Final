void reorderList(ListNode* head) {
    if((!head) || (!head -> next)) {
        return;
    }

    ListNode *runner = head;
    stack<ListNode*> st;

    while(runner) {
        st.push(runner);
        runner = runner -> next;
    }

    int size = st.size();
    runner = head;

    for(int i=0; i<size/2; i++) {
        st.top() -> next = runner -> next;
        runner -> next = st.top();
        runner = runner -> next -> next;
        st.pop();
    }
    runner -> next = NULL;
}