unordered_map<int, pair<int, int> > m;
void inorder(Node *root, int l, int parent)
{
    if(!root)
        return ;
    inorder(root->left, l+1, root->data);
    pair<int, int> temp;
    temp.first=l;
    temp.second=parent;
    m[root->data]=temp;
    inorder(root->right, l+1, root->data);
}
bool isCousins(Node *root, int a, int b)
{
    m.clear();
    inorder(root, 0, -1);
    if(m[a].first==m[b].first && m[a].second!=m[b].second)
        return 1;
    return 0;
}
