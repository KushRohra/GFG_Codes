void helper(Node*root1,Node*root2,int level)
{
    if(!root1 || !root2) 
		return;
    if(level%2==0) 
		swap(root1->data,root2->data);
    helper(root1->left,root2->right,level+1);
    helper(root1->right,root2->left,level+1);
}

void reverseAlternate(Node *root)
{
    if(!root)
        return ;
    helper(root->left, root->right, 0);
    return ;
}
