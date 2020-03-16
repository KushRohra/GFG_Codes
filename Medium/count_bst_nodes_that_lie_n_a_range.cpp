/*
The structure of a BST node is as follows:
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
void count(Node *root,int l,int h,int *c)
{
	if(root==NULL)
		return;
	if(root->data>=l)		// remove if any error
		count(root->left,l,h,c);
	if(root->data<=h && root->data>=l)
		(*c)++;
	if(root->data<=h)		// remove if any error
		count(root->right,l,h,c);
}
int getCountOfNode(Node *root,int l,int h)
{
	int c=0;
	count(root,l,h,&c);
	return c;
}
