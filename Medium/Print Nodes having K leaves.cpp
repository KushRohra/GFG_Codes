int fill(Node *root, int k, vector<int> &v) {
    if(!root) 
        return 0;
    if(!root->right && !root->left)
        return 1;
    int left=fill(root->left, k, v);
    int right=fill(root->right, k, v);
    if(left+right==k)
        v.push_back(root->data);
    return left+right;
}
void btWithKleaves(Node *ptr, int k) { 
    vector<int> v;
    fill(ptr, k, v);
    if(v.size()==0)
        cout<<"-1 ";
    else {
        for(auto i:v)
            cout<<i<<" ";
    }
    cout<<endl;
}
