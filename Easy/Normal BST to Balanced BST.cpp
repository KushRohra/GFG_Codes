/*Structure of the Node of the BST is as
struct Node
{
	int data;
	Node* left, *right;
};
*/
// Your are required to complete this function
// function should return root of the modified BST
Node *arraytobst(int a[],int s,int e)
{
	if(s>e)
		return NULL;
	int mid=(s+e)/2;
	Node *root=newNode(a[mid]);
	root->left=arraytobst(a,s,mid-1);
	root->right=arraytobst(a,mid+1,e);
	return root;
} 
void getcount(Node *root, int *c)
{
    if(root==NULL)
        return;
    getcount(root->left,c);
    (*c)++;
    getcount(root->right,c);
}
Node *bsttoarr(Node *root,int a[],int *i)
{
    if(root==NULL)
        return root;
    bsttoarr(root->left,a,i);
    a[(*i)++]=root->data;
    bsttoarr(root->right,a,i);
}
Node* buildBalancedTree(Node* root)
{
	int c=0,i=0,h;
	getcount(root,&c);
	int a[c];
	bsttoarr(root,a,&i);
	Node *temp;
	temp=arraytobst(a,0,c-1);
	return temp;
}

