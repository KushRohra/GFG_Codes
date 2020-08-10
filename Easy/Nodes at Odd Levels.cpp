void printOddNodes(Node *root)
{
    if(!root) { 
        cout<<endl;
        return ;
    }
    queue<pair<Node *, int>> q;
    q.push({root,0});
    while(!q.empty()) {
        Node *temp = q.front().first;
        int level = q.front().second;
        if(level%2==0)
            cout<<temp->data<<" ";
        q.pop();
        if(temp->left)
            q.push({temp->left, level+1});
        if(temp->right)
            q.push({temp->right, level+1});
    }
    cout<<endl;
    return ;        
}
