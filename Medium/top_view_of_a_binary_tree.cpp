struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/
// function should print the topView of the binary tree
void topView(struct Node *root)
{
    int p,l=0;
    map<int,int> m;
    pair<Node *,int> t;
    queue<pair<Node *,int>> q;
    q.push(make_pair(root,l));
    m[l]=root->data;
    while(q.size())
    {
        t=q.front();
        q.pop();
        p=t.second;
        if(m.count(p)==0)
            m[p]=(t.first)->data;
        if((t.first)->left!=NULL)
        {
            q.push(make_pair((t.first)->left,p-1));
        }
        if((t.first)->right!=NULL)
        {
            q.push(make_pair((t.first)->right,p+1));
        }
    }
    for(auto k=m.begin();k!=m.end();k++)
    {
        cout<<k->second<<" ";
    }
}
