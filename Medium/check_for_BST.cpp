`/* A binary tree node has data, pointer to left child
   and a pointer to right child  
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
int isBSTUtil(struct Node *node,int min,int max)
{
	if(node==NULL)
		return 1;
	if(node->data<min || node->data>max)
		return 0;
	return isBSTUtil(node->left,min,node->data-1) && isBSTUtil(node->right,node->data+1,max);
}
bool isBST(Node *root)
{
	return(isBSTUtil(root,INT_MIN,INT_MAX));
}
