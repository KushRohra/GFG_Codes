vector<int> v;
void inorder(node *root, int l) {
    if(!root)
        return ;
    if(!root->left && !root->right)
        v.push_back(l);
    inorder(root->left, l+1);
    inorder(root->right, l+1);
}
int getCount(struct node* node, int k) {
    v.clear();
    int sum=0;
    inorder(node, 1);
    int i,n=v.size();
    sort(v.begin(), v.end());
    for(i=0;i<n;i++) {
        sum+=v[i];
        if(sum>k)
            break;
    }
    return i;
}
