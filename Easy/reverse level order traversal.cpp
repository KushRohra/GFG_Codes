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
void levelOrder(struct TreeNode *root)
{
	queue<TreeNode *> q;
	stack< vector<int> > v1;
	vector<int> v;
	q.push(root);
	q.push(NULL);
	while(q.empty()==false)
	{
		TreeNode *temp=q.front();
		if(temp!=NULL)
		{
			v.push_back(temp->data);
			q.pop();
			if(temp->left!=NULL)
				q.push(temp->left);
			if(temp->right!=NULL)
				q.push(temp->right);
		}
		else
		{
			v1.push(v);
			v.clear();
			q.pop();
			if(q.empty()==false)
				q.push(NULL);	
		}
	}
	while(v1.empty()==false)
	{
		vector<int> v=v1.top();
		for(int j=0;j<v.size();j++)
			cout<<v[j]<<" ";
		v1.pop();
	}
	cout<<endl;
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
	levelOrder(root);
}
