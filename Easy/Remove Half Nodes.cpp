bool ishalfnode(Node *root)
{
    if(root->left && !root->right)
        return true;
    if(root->right && !root->left)
        return true;
    return false;
}
Node *RemoveHalfNodes(Node *root)
{
    if(!root)
        return NULL;
    root->left = RemoveHalfNodes(root->left);  
    root->right = RemoveHalfNodes(root->right);
    if(ishalfnode(root))
    {
        if(root->left)
            return root->left;
        if(root->right)
            return root->right;
    }
    return root;
}

