void findSum(Node *root, int target, int sum, bool &f) {
    if(!root || f)
        return ;
    sum+=root->data;
    if(!root->left && !root->right)
        if(sum==target)
            f=1;
    //cout<<root->data<<" "<<sum<<endl;
    findSum(root->left, target, sum, f);
    findSum(root->right, target, sum, f);
}
bool hasPathSum(Node *node, int sum) {
    bool f=0;
    findSum(node, sum, 0, f);
    return f;
}
