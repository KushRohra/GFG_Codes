/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */
// Should print right view of tree
void print(Node *root,int l,int *max)
{
    if(root==NULL)
        return;
    if(l==*max)
    {
        cout<<root->data<<" ";
        *max=l+1;
    }
    print(root->right,l+1,max);
    print(root->left,l+1,max);
}
void rightView(Node *root)
{
    int l=1,max=1;
   print(root,l,&max);
}

