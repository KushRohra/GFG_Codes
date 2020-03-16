
/* The structure of a BST Node is as follows:
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
}; 
*/
Node *findMin(Node *root)
{
	Node *curr=root;
	while(curr && curr->left!=NULL)
		curr=curr->left;
	return curr;
}
Node *deleteNode(Node *root, int x)
{
	if(root==NULL)
		return NULL;
	if(x<root->data)
		root->left=deleteNode(root->left,x);
	else if(x>root->data)
		root->right=deleteNode(root->right,x);
	else
	{
		if(root->left==NULL)
		{
			Node *temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			Node *temp=root->left;
			free(root);
			return temp;
		}
		Node *temp=findMin(root->right);
		root->data=temp->data;
		root->right=deleteNode(root->right,temp->data);	
	}
	return root;

}
