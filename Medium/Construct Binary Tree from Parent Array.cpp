Node *createTree(int parent[], int n)
{
    vector<Node*> m;
    int i;
    int root;
    for(int i=0;i<n;i++)
    {
        Node *temp = new Node(i);
        m.push_back(temp);
    }
    for(i=0;i<n;i++)
    {
        if(parent[i]!=-1)
        {
            if(m[parent[i]]->left==NULL)
                m[parent[i]]->left = m[i];
            else if(m[parent[i]]->right==NULL)
                m[parent[i]]->right = m[i];
        }
        else root = i;
    }
    return m[root];
}
