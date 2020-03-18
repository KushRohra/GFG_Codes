/*
Structure of the binary Search Tree is as
struct node
{
	int key;
	struct node *left, *right;
};
*/
// your task is to complete the Function
// Function is used to change a key value in the given BST
// Note: Function should return root node to the new modified BST

struct node *findMin(struct node *root) 
{
	struct node *curr=root;
	while(curr && curr->left!=NULL)
	{
		curr=curr->left;
	}
	return curr;
}
struct node *deleteNode(struct node *root,int key)
{
	if(root==NULL)
		return NULL;
	if(key<root->key)
		root->left=deleteNode(root->left,key);
	else if(key>root->key)
		root->right=deleteNode(root->right,key);
	else
	{
		if(root->left==NULL)
		{
			struct node *temp;
			temp=root->right;
			free(root);
			return temp;
		}
		if(root->right==NULL)
		{
			struct node *temp;
			temp=root->left;
			free(root);
			return temp;
		}
		struct node *temp=findMin(root->right);
		root->key=temp->key;
		root->right=deleteNode(root->right,temp->key);
	}
}
struct node *changeKey(struct node *root,int oldVal,int newVal)
{
	root=deleteNode(root,oldVal);
	root=insert(root,newVal);
	return root;
}
