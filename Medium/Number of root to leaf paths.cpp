void countPath(Node *root, int l, map<int, int> &m) {
    if(!root)
        return ;
    if(!root->left && !root->right) 
        m[l]++;  
    countPath(root->left, l+1, m);
    countPath(root->right, l+1, m);
}
void pathCounts(Node *root) {
    map<int, int> m;
    countPath(root, 1, m);
    for(auto i=m.begin();i!=m.end();i++)   
        cout<<i->first<<" "<<i->second<<" $ ";
}
