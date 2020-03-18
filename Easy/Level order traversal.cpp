/* A binary tree Node
struct Node
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
//You are required to complete this method
void levelOrder(Node* node)
{
    queue<Node *> q;
    q.push(node);
    {
        while(!q.empty())
        {
            cout<<q.front()->data<<" ";
            if(q.front()->left!=NULL)
                q.push(q.front()->left);
            if(q.front()->right!=NULL)    
                q.push(q.front()->right);
            q.pop();
        }
    }
}

