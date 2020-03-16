/* Node structure 
struct Node {
    int data;
    Node * right, * left;
};*/
/*You are required to complete this method*/
bool search(Node* root, int x)
{
    if(root==NULL)
        return 0;
    if(root->data==x)
        return 1;
    else if(root->data>x)
        return search(root->left,x);
    else return search(root->right,x);
}
