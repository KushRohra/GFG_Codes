#include<bits/stdc++.h>
using namespace std;
struct TreeNode 
{ 
    int data; 
    struct TreeNode *left, *right; 
}; 
struct TreeNode *newNode(int item) 
{ 
    struct TreeNode *temp =  (struct TreeNode *)malloc(sizeof(struct TreeNode)); 
    temp->data = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
struct TreeNode* insert(struct TreeNode* node, int key) 
{ 
    if (node == NULL) 
		return newNode(key); 
    if (key < node->data) 
        node->left  = insert(node->left, key); 
    else if (key > node->data) 
        node->right = insert(node->right, key);    
    return node; 
} 
int maxLevelSum(struct TreeNode *root)
{
	queue<TreeNode *> q;
	q.push(root);
	q.push(NULL);
	int sum=0,max=INT_MIN;
	while(q.empty()==false)
	{
		TreeNode *temp=q.front();
		if(temp!=NULL)
		{
			sum+=temp->data;
			q.pop();
			if(temp->left!=NULL)
				q.push(temp->left);
			if(temp->right!=NULL)
				q.push(temp->right);
		}
		else
		{
			q.pop();
			if(sum>max)
				max=sum;
			sum=0;
			if(q.empty()==false)
				q.push(NULL);	
		}
	}
	return max;
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
	cout<<maxLevelSum(root)<<endl;
}
