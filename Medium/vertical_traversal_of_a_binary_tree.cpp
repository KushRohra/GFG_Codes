[Cstruct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */
void verticalOrder(Node *root)
{
    int p,l=0;
    multimap<int,int> m;
    pair<Node *,int> t;
    queue<pair<Node *,int>> q;
    q.push(make_pair(root,l));
    while(q.size())
    {
        t=q.front();
        q.pop();
        p=t.second;
        m.insert(pair<int,int> (p,(t.first)->data));
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
