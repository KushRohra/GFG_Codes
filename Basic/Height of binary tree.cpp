#include<bits/stdc++.h>
using namespace std;
struct Node 
{ 
    int val; 
    struct Node *left, *right; 
}; 
struct Node *newNode(int item) 
{ 
    struct Node *temp =  (struct Node *)malloc(sizeof(struct Node)); 
    temp->val = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
struct Node* insert(struct Node* node, int key) 
{ 
    if (node == NULL) 
		return newNode(key); 
    if (key < node->val) 
        node->left  = insert(node->left, key); 
    else if (key > node->val) 
        node->right = insert(node->right, key);    
    return node; 
} 
void inorder(Node *root)
{
	if(root==NULL)
		return ;
	inorder(root->left);
	cout<<root->val<<" ";
	inorder(root->right);
}
int height(Node *root)
{
	if(root==NULL)
		return 0;
	int lh=0,rh=0;
	lh=1+height(root->left);
	rh=1+height(root->right);
	if(lh>rh)
		return lh;
	else return rh; 
}
int main()
{
	struct Node *root = NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		root=insert(root,x);	
	}	
	inorder(root);
	cout<<endl;
	cout<<height(root)<<endl;
}
