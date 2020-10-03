void find(Node *root, int n1, int n2, bool &f1, bool &f2) {
    if(!root) return;
    find(root->left,n1,n2,f1,f2);
    if(root->data==n1) f1=1;
    if(root->data==n2) f2=1;
    find(root->right,n1,n2,f1,f2);
}
Node *LCA(Node *root, int n1, int n2)  {
    if(!root) return NULL;
    if(root->data==n1 || root->data==n2)
        return root;
    Node *left=LCA(root->left,n1,n2);
    Node *right=LCA(root->right,n1,n2);
    if(left && right)
        return root;
    return left!=NULL ? left : right;
}
Node* lca(Node* root ,int n1 ,int n2 ) {
    bool f1=0,f2=0;
    find(root,n1,n2,f1,f2);
    if(!f1 || !f2) return NULL;
    return LCA(root,n1,n2);
}
