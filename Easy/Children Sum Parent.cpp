int check(Node *root) {
    if(!root)  
        return 1;
    if(!root->left && !root->right)
        return 1;
    int l=0,r=0;
    if(root->left)  
        l = root->left->data;
    if(root->right)
        r = root->right->data;
    return root->data==l+r  && check(root->left) && check(root->right);
}
int isSumProperty(Node *root)
{
    if(!root)
        return 1;
    return check(root);
}
