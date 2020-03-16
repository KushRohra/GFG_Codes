/*The Node structure is
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
/*You are required to complete below method */
void inorder(Node *root,int k,int *i,int *min)
{
	if(root==NULL)
		return;
	inorder(root->left,k,i,min);
	*i=k-root->data;
	if(*i<0)
		*i=-(*i);
	if((*i)<(*min))
		*min=*i;
	inorder(root->right,k,i,min);

}
int maxDiff(Node *root, int k)
{
	int i=k,min=INT_MAX;
	inorder(root,k,&i,&min);
	return min;
