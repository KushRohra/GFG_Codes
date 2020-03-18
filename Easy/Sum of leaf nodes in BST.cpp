/* The structure of Node
struct Node{
    int data;
    Node *left,*right;
}; */
/*You are required to complete below method */
int sumOfLeafNodes(Node *r )
{
    int sum=0;
    if(r==NULL)
        return 0;
    sum=sum+sumOfLeafNodes(r->left);
    if(r->left==NULL && r->right==NULL)
        return sum+r->data;
    sum=sum+sumOfLeafNodes(r->right);
    return sum;
}

