void t2a(Node *root, vector<int> &v) {
    if(!root)
        return ;
    t2a(root->left, v);
    v.push_back(root->data);
    t2a(root->right, v);
}
Node *atobst(vector<int> &v, int s, int e) {
    if(s>e)
        return NULL;
    int mid=s+(e-s)/2;
    Node *root = new Node(v[mid]);
    root->left=atobst(v,s,mid-1);
    root->right=atobst(v,mid+1,e);
    return root;
}
Node *binaryTreeToBST (Node *root) {
    vector<int> v;
    t2a(root, v);
    sort(v.begin(), v.end());
    int s=0, e=v.size()-1;
    return atobst(v,s,e);
}
