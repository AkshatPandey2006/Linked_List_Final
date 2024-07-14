vector<int> nextLargerNodes(ListNode* head) {
    vector<int> ans;
    stack<pair<int,int>> s;
    int i=0;
    while(head){
        while(!s.empty() && s.top().first<head->val){
            int idx=s.top().second;
            s.pop();
            ans[idx]=head->val;
        }
        s.push({head->val,i++});
        head=head->next;
        ans.push_back(0);
    }
    return ans;
}