ListNode *sortList(ListNode *head) {
    vector<int> ans;

    ListNode *temp = head;
    while(temp) {
        ans.push_back(temp -> val);
        temp = temp -> next;
    }

    sort(ans.begin(), ans.end());

    int i = 0;
    temp = head;
    while(temp) {
        temp -> val = ans[i];
        temp = temp -> next;
        i++;
    }

    return head;
}