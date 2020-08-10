void connect(Node *p)
{
   queue<Node *> q;
   q.push(p);
   q.push(NULL);
   while(!q.empty()) {
       Node *temp=q.front();
       q.pop();
       if(temp==NULL) {
            if(q.size()!=0)
               q.push(NULL);
            continue;
       }
        temp->nextRight=q.front();
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
   }
   return ;
}
