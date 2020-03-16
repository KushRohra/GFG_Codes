//User function Template for C++
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
/* Should return count of leaves. For example, return
    value should be 2 for following tree.
         10
      /      \ 
   20       30 */
void inorder(Node *head,int *c)
{
    if(head==NULL)
        return;
    inorder(head->left,c);
    if(head->left==NULL && head->right==NULL)
        (*c)++;
    inorder(head->right,c);
}
int countLeaves(Node* root)
{
    int c=0;
    inorder(root,&c);
    return c;
}
