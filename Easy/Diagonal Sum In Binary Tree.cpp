void fill(Node *root, map<int,int> &m, int l) {
    if(!root) 
        return ;
    m[l]+=root->data;
    fill(root->left,m,l+1);
    fill(root->right,m,l);
}
vector <int> diagonalSum(Node* root) {
    map<int,int> m;
    vector<int> ans;
    fill(root,m,0);
    for(auto it:m) {
        ans.push_back(it.second);
    }
    return ans;
}
