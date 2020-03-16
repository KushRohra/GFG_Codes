/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/
void inorder(Node *root,int a[],int *i)
{
    if(root==NULL)
        return;
    inorder(root->left,a,i);
    a[(*i)]=root->data;
    (*i)++;
    inorder(root->right,a,i);
}
Node *bTreeToCList(Node *root)
{
    Node *t,*prev,*head_ref=NULL;
    int i=0,a[1001],j=0;
    inorder(root,a,&i);
    /*for(j=0;j<i;j++)
        cout<<a[j]<<" ";*/
    while(j<i)
    {
        if(head_ref==NULL)
        {
            t=(struct Node*)malloc(sizeof(struct Node));
            t->data=a[j];
            j++;
            t->left=NULL;
            t->right=NULL;
            head_ref=t;
            prev=t;
        }
        else
        {
            t=(struct Node*)malloc(sizeof(struct Node));
            t->data=a[j];
            j++;
            t->left=NULL;
            t->right=NULL;
            prev->right=t;
            t->left=prev;
            prev=t;
        }   
    }
    prev->right=head_ref;
    head_ref->left=prev;
    return head_ref;
