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
    while(1)
    {
        int size = q.size();
        if(size==0)
            break;
        while(size>0)
        {
            node = q.front();
            q.pop();
            cout<<node->data<<" ";
            if(node->left!=NULL)
                q.push(node->left);
            if(node->right!=NULL)
                q.push(node->right);
            size--;
        }
        cout<<"$ ";
    }
}

