struct tree{
    bool isBst;
    int size, min, max;
};
bool isLeaf(Node *root)
{
    if(!root->left && !root->right)
        return true;
    return false;
}
tree large(Node *root)
{
    if(isLeaf(root))
    {
        tree temp;
        temp.isBst=true; temp.size=1; temp.min=root->data; temp.max=root->data;
        return temp;
    }
    tree left, right;
    if(root->left)
        left = large(root->left);
    if(root->right)
        right = large(root->right);
    if(root->left && root->right)
    {
        tree temp;
        temp.isBst=false;  temp.size=max(left.size, right.size); 
        temp.min=0; temp.max=0;
        if(left.isBst==false || right.isBst==false)
            return temp;
        if(!(left.max<root->data && right.min>root->data))
            return temp;
        else
        {
            temp.isBst=true; temp.size=left.size+right.size+1;
            temp.min=left.min; temp.max=right.max;
            return temp;
        }
    }
    else if(root->left && !root->right)
    {
        tree temp;
        temp.isBst=false;  temp.size=left.size; 
        temp.min=0; temp.max=0;
        if(left.isBst==false)
            return temp;
        if(!(left.max<root->data))
            return temp;
        temp.isBst=true; temp.size=left.size+1;
        temp.max=root->data; temp.min=left.min;
        return temp;
    }
    else if(root->right && !root->left)
    {
        tree temp;
        temp.isBst=false;  temp.size=right.size; 
        temp.min=0; temp.max=0;
        if(right.isBst==false)
            return temp;
        if(!(right.min>root->data))
            return temp;
        temp.isBst=true; temp.size=right.size+1;
        temp.min=root->data; temp.max=right.max;
        return temp;
    }
}
int largestBst(Node *root)
{
	tree p = large(root);
	return p.size;
}
