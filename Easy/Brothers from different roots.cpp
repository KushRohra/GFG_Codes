//User function Template for C++
/*Structure of the Node of the BST is as
struct Node {
	int data;
	Node* left, *right;
};*/
// You are required to complete this function

void getcount(Node *root,int &c)
{
	if(root==NULL)
		return;
	getcount(root->left,c);
	c++;
	getcount(root->right,c);
}
void getArray(Node *root,int a[],int *i)
{
	if(root==NULL)
		return;
	getArray(root->left,a,i);
	a[(*i)++]=root->data;
	getArray(root->right,a,i);
}
void countUtil(Node *root,int k,int x,int *c)
{
	if(root==NULL)
		return;
	if(k+root->data<x)
		countUtil(root->right,k,x,c);
	else if(k+root->data>x)
		countUtil(root->left,k,x,c);
	else (*c)++;
}
int countPairs(Node *root1, Node *root2, int x)
{
	int n=0;
	getcount(root1,n);
	int a[n],k,c=0,i=0;
	getArray(root1,a,&i);
	for(int i=0;i<n;i++)
	{
		k=a[i];
		countUtil(root2,k,x,&c);
	}
	return c;
}
