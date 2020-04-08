#include<bits/stdc++.h>
using namespace std;
struct TreeNode 
{ 
    int val; 
    struct TreeNode *left, *right; 
}; 
struct TreeNode *newNode(int item) 
{ 
    struct TreeNode *temp =  (struct TreeNode *)malloc(sizeof(struct TreeNode)); 
    temp->val = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
struct TreeNode* insert(struct TreeNode* node, int key) 
{ 
    if (node == NULL) 
		return newNode(key); 
    if (key < node->val) 
        node->left  = insert(node->left, key); 
    else if (key > node->val) 
        node->right = insert(node->right, key);    
    return node; 
} 
void sumofrightleaf(TreeNode *root, int &sum , int &f)
{
	if(root==NULL)
		return ;
	if(root->left==NULL && root->right==NULL && f==1)
		sum+=root->val;
	f=1;
	sumofleftleaf(root->right, sum, f);
	f=0;
	sumofleftleaf(root->left, sum, f);
}
int rightLeavesSum(Node *root)
{
    int sum=0, f=0;
    sumofleftleaf(root, sum, f);
    return sum;
}
int main()
{
	struct TreeNode *root = NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		root=insert(root,x);	
	}	
	cout<<rightLeavesSum(root)<<endl;
}
