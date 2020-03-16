//User function Template for C++
/*
Structure of the Node of the node of the bst 
should be as
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
// You are required to complete this function
Node *insert(Node *root,int x)
{
	if(root==NULL)
	{
		root=new Node(x);
	}
	else if(root->data<x)
		root->right=insert(root->right,x);
	else root->left=insert(root->left,x);
	return root;
}
Node *constructBst(int arr[],int n)
{
	int i;
	Node *root=NULL;
	for(i=0;i<n;i++)
		root=insert(root,arr[i]);
	return root;
