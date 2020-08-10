int isSum(Node *root)
{
    if(!root)
        return 0;
    if(!root->left && !root->right)
        return root->data;
    int left=isSum(root->left);
    int right=isSum(root->right);
    if(root->data==left+right)
        return 2*root->data;
    else return 0;
}
bool isSumTree(Node* root) {
    if(!root)
        return 1;
    if(!root->left && !root->right)
        return 1;
    if(isSum(root)/2==root->data)
        return 1;
    return 0;
}
