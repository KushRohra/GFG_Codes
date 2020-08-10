bool helper(Node *r1, Node *r2)
{
    if(!r1 && !r2)
        return true;
    if(!r1 && r2)
        return false;
    if(!r2 && r1)
        return false;
    return helper(r1->left,r2->left) && helper(r1->right,r2->right) && r1->data==r2->data;
}
void check(Node *T, Node *S, bool &f) {
    if(f || !T)
        return ;
    if(T->data == S->data)
        f=max(f,helper(T,S));
    check(T->left, S, f);
    check(T->right, S, f);
}
bool isSubTree(Node* T, Node* S) {
    bool f=0;
    check(T,S,f);
    return f;
}
