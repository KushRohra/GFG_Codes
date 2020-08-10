void printKdistance(struct Node *root, int k)
{
    if(!root)
        return ;
    printKdistance(root->left, k-1);
    if(k==0)
        cout<<root->data<<" ";
    printKdistance(root->right, k-1);
}
