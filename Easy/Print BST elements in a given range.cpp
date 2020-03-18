/* The structure of a BST Node is as follows:
struct Node 
{
    int data;
    Node * right, * left;
}; */
void printNearNodes(Node *root, int l, int h)
{
    if(root==NULL)
        return;
    printNearNodes(root->left,l,h);
    if(root->data>=l && root->data<=h)
        cout<<root->data<<" ";
    printNearNodes(root->right,l,h);
}
