void findLevel(struct Node *root, int x, int &ans, int l) {
    if(!root)
        return ;
    findLevel(root->left, x, ans, l+1);
    if(root->data==x)
        ans=l;
    findLevel(root->right, x, ans, l+1);
}
int getLevel(struct Node *node, int target) {
	int ans, l=0;
	findLevel(node, target, ans, l);
	if(ans==0)
	    return 0;
	return ans+1;
}
