struct Node *lca(struct Node *root,int a,int b)
{
    if(root==NULL)
        return root;
    if(root->data==a || root->data==b)
        return root;
    struct Node *l=lca(root->left,a,b);
    struct Node *r=lca(root->right,a,b);
    if(l && r)
        return root;
    return l!=NULL ? l : r ;
}
void find(Node *root, int a, int b, Node* &node1, Node* &node2)
{
    if(!root)
        return ;
    if(root->data==a)
        node1 = root;
    if(root->data==b)
        node2 = root;
    find(root->left, a, b, node1, node2);
    find(root->right, a, b, node1, node2);
}
void level(Node *root, int a, int b, int ll, int &h1, int &h2, int &h3, int l)
{
    if(!root)
        return ;
    level(root->left,a,b,ll,h1,h2,h3,l+1);
    level(root->right,a,b,ll,h1,h2,h3,l+1);
    if(root->data==a)
        h1=l;
    if(root->data==b)
        h2=l;
    if(root->data==ll)
        h3=l;
}
int findDist(Node* root, int a, int b) 
{
    if(!root)
        return 0;
    Node *A=NULL, *B=NULL, *ll=NULL;
    find(root,a,b,A,B);
    if(A==NULL || B==NULL)	//Check of both nodes exist or not
        return 0;
    ll = lca(root,A->data,B->data);
    int h1=0, h2=0, h3=0, l=0;
    level(root,A->data,B->data,ll->data,h1,h2,h3,l);
    return ((h1)+(h2) - 2*(h3)); 	//length till LCA nodes to both the values is repeated twice 
}
