//function Template for C++
/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */
/* Should convert tree to its mirror */
void mirror(Node* node) 
{
    if(node==NULL)
        return;
    mirror(node->left);
    mirror(node->right);
    Node *t;
    t=node->right;
    node->right=node->left;
    node->left=t;
}
