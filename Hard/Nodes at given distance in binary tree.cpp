class solver
{
private:

public:
	
    unordered_map<Node*, Node*> m;
    void findParent(Node *root, Node *parent, int target, Node *&targetNode) {
        if(!root)
            return ;
        m[root]=parent;
        if(root->data==target)
            targetNode=root;
        findParent(root->left,root,target,targetNode);
        findParent(root->right,root,target,targetNode);
    }
    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        vector<int> v;
        Node *targetNode=NULL;
        findParent(root,NULL,target,targetNode);
        if(!targetNode)
            return v;
        queue<pair<Node*,int>> q;
        q.push({targetNode,0});
        bool f=0;
        unordered_set<Node*> s;
        while(!q.empty() && !f) {
            int size=q.size();
            for(int i=0;i<size;i++) {
                Node *temp=q.front().first;
                int level=q.front().second;
                q.pop();
                if(s.find(temp)!=s.end())
                    continue;
                s.insert(temp);
                if(level==k) {
                    f=1;
                    v.push_back(temp->data);
                }
                if(temp->left)
                    q.push({temp->left,level+1});
                if(temp->right)
                    q.push({temp->right,level+1});
                if(m[temp])
                    q.push({m[temp],level+1});
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};
