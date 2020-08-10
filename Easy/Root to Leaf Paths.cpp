void print(Node *root, string s) {
    if(!root)
        return ;
    s+=to_string(root->data);
    if(!root->left && !root->right)
    {
        cout<<s+" #";
    }    
    print(root->left, s+" ");
    print(root->right, s+" ");
}
void printPaths(Node* root)
{
    print(root,"");
    cout<<endl;
}
