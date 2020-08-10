bool isIsomorphic(Node *root1,Node *root2)
{
    if(!root1 && !root2)
        return true;
    if(!root1 && root2)
        return false;
    if(!root2 && root1)
        return false;
    bool f1=isIsomorphic(root1->left, root2->left) && isIsomorphic(root1->right, root2->right);
    bool f2=isIsomorphic(root1->left, root2->right) && isIsomorphic(root1->right, root2->left);
    bool f=f1 || f2;
    //cout<<root1->data<<" "<<root2->data<<f<<endl;
    return f && root1->data==root2->data;
}


