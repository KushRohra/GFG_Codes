bool sym(Node *r1, Node *r2)
{
    if(!r1 && !r2)
        return true;
    if(r1 && !r2)
        return false;
    if(!r1 && r2)
        return false;
    return sym(r1->left, r2->right) && sym(r1->right, r2->left) && r1->data==r2->data;
}
bool isSymmetric(struct Node* root)
{
	if(!root)
	    return true;
	return sym(root->left, root->right);
}
