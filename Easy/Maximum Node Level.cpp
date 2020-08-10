int maxNodeLevel(Node *root) {
    queue<Node *> q;
    q.push(root);
    int ans=0, l=0, index;
    while(!q.empty()) {
        int i, size=q.size();
        l++;
        if(ans<size) {
            ans=size;
            index=l-1;
        }
        for(i=0;i<size;i++) {
            Node *temp = q.front();
            q.pop();
            if(temp->left)  
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }  
    }
    return index;
}
