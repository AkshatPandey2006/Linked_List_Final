bool isSubPath(ListNode* head, TreeNode* root) {
    if(root == NULL) return false;
    return find(head,root) || isSubPath(head,root->left) || isSubPath(head,root->right);
}

bool find(ListNode* head, TreeNode* root){
    if(head == NULL) return true;
    if(root == NULL) return false;
    if(root->val == head->val)
        return find(head->next,root->left) || find(head->next,root->right);
    else return false;
}