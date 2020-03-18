/*Structure of the node of the binary tree is as
struct Node
{
	int data;
	Node *left, *right;
};*/
// function should return the sum of all the 
// leaf nodes of the binary tree
void inorder(Node *root, int *sum)
{
    if (!root) 
        return; 
    if (!root->left && !root->right) 
        *sum += root->data; 
    inorder(root->left, sum); 
    inorder(root->right, sum); 
}
int sumLeaf(Node* root)
{
    int sum=0;
    inorder(root,&sum);
    return sum;
}
