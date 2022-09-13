string tree2str(TreeNode* root) {
        
    if (root == nullptr)
    {
        return "";
    }
    if(root->left == nullptr && root->right == nullptr)
    {
        return to_string(root->val);
    }
    if(root->right == nullptr)
    {
        return to_string(root->val) + "(" + tree2str(root->left) + ")";
    }

    return to_string(root->val) + "(" + tree2str(root->left) + ")" + "(" + tree2str(root->right) + ")";
        
    }