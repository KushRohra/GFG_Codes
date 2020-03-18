
/* The structure of a BST node is as follows:
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
}; */
/* This function should insert a new node with 
  given data and return root of the modified tree  */

Node *search(Node *root,int d)
{
	if(root==NULL || root->data==d)
		return root;
	if(d>root->data)
		return search(root->right,d);
	return search(root->left,d);
}
Node *insertUtil(Node *root,int data)
{
	if(root==NULL)
	{
		root=new Node(data);
	}
	else if(data<root->data)
		root->left=insertUtil(root->left,data);
	else root->right=insertUtil(root->right,data);
	return root;
}
Node *insert(Node *node, int data)
{
	Node *tmp;
	tmp=search(node,data);
	if(tmp!=NULL && tmp->data==data)
	{
		return node;
	}		
	else
	{
		node=insertUtil(node,data);
		return node;
	}
}
