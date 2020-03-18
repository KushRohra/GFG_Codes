/* A binary tree node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */
// A wrapper over leftViewUtil()
void print(Node *root,int l,int *max)
{
    if(root==NULL)
        return;
    if(l==*max)
    {
        cout<<root->data<<" ";
        *max=l+1;
    }
    print(root->left,l+1,max);
    print(root->right,l+1,max);
}
void leftView(Node *root)
{
    int l=1,max=1;
   print(root,l,&max);
}

