/* BST Node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */
/*  modifies the root of the bst */
void reverse(Node *root,int &sum)
{
	if(root==NULL)
		return;
	reverse(root->right,sum);
	sum=sum+root->data;
	root->data=sum;
	reverse(root->left,sum);
}
void modify(Node **root)
{
	int sum=0;
	reverse(*root,sum);
