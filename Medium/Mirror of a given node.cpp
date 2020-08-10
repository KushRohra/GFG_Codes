int findMirrorRec(int target, struct Node* left, struct Node* right) {
    if(!left || !right)
        return -1;
    if(left->key==target)
        return right->key;
    if(right->key==target)
        return left->key;
    int p = findMirrorRec(target, left->left, right->right);
    if(p!=-1)
        return p;
    return findMirrorRec(target, left->right, right->left);
}
