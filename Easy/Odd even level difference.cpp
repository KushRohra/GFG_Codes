int odd=0, even=0;
void inorder(Node *root, int l) {
    if(!root)
        return ;
    inorder(root->left, l+1);
    if(l%2)
        odd+=root->data;
    else even+=root->data;
    inorder(root->right, l+1);
}
int getLevelDiff(Node *root) {
 	odd=0;
    even=0;
    inorder(root, 0);
    return even-odd;
}

