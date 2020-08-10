int check(Node *root, bool &f, int l) {
    if(!root)
        return 0;
    int left=check(root->left,f,l+1);
    int right=check(root->right,f,l+1);
    int diff=abs(left-right);
    f=f&(diff<=1);
    return max(left,right)+1;
}
bool isBalanced(Node *root) {
    bool f=1;
    int l=0;
    l=check(root, f, l);
    return f;
}

