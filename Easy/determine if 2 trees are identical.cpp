/* A binary tree node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
/* Should return true if trees with roots as r1 and 
   r2 are identical */
bool isIdentical(Node *r1, Node *r2)
{
    if(r1==NULL && r2==NULL)
        return 1;
    else if(r1==NULL && r2!=NULL)
        return 0;
    else if(r1!=NULL && r2==NULL)
        return 0;
    return isIdentical(r1->left,r2->left) && isIdentical(r1->right,r2->right);
    if(r1->data==r2->data)
        return 1;
    else return 0;
}
