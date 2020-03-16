/*
Structure of the node of the binary search tree is as
struct Node 
{
	int data;
	Node* left;
	Node* right;
};
*/
// your task is to complete the below function
int minValue(Node* root)
{
    while(root->left!=NULL)
        root=root->left;
    return root->data;
}
