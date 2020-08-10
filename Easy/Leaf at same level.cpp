bool isLeaf(Node *root) {
    if(!root->left && !root->right)
        return true;
    return false;
}
bool same(Node *root, int l, int &sampleLevel) {
    if(!root)   
        return true;
    if(isLeaf(root)) {
        if(sampleLevel==-1)
            sampleLevel=l;
        else {
            if(sampleLevel==l)
                return true;
            else return false;
        }    
    }
    return same(root->left, l+1, sampleLevel) && same(root->right, l+1, sampleLevel);
}
bool check(Node *root) {
    int sampleLevel=-1, l=0;
    return same(root, l, sampleLevel);
}
