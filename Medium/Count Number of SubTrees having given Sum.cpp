int count(Node *root, int X, int &c)
{
    if(!root)
        return 0;
    int left=count(root->left, X, c);
    int right=count(root->right, X, c);
    int sum=root->data+left+right;
    if(sum==X)
        c++;
    return sum;
}
int countSubtreesWithSumX(Node* root, int X)
{
	int c=0;
	int f = count(root, X, c);
	return c;
}
