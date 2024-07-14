void flatten(TreeNode* root) {
    if(root == NULL){
        return;
    }

    flatten(root->left);
    flatten(root->right);
    
    if(root->left){
        TreeNode *right = root->right;
        root->right = root->left;
        root->left = NULL;
        while(root->right) root = root->right;
        root->right = right;
    }
}