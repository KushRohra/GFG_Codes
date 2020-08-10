bool isLeaf(Node *root)
{
    if(!root->left && !root->right)
        return true;
    return false;
}
void count(Node *root, int &c)
{
    if(!root)
        return ;
    count(root->left, c);
    if(!isLeaf(root))
        c++;
    count(root->right, c);
}
int countNonLeafNodes(Node* root)
{
    int c=0;
    count(root, c);
    return c;
}
