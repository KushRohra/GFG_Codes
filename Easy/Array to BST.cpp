using namespace std;
struct node 
{
	int data;
	node *left;
	node *right;
};
void preorder(node *root)
{
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
node *newnode(int k)
{
	node *temp=new node;
	temp->data=k;
	temp->left=NULL;
	temp->right=NULL;
	return temp;	
}
node *arraytobst(int a[],int s,int e)
{
	if(s>e)
		return NULL;
	int mid=(s+e)/2;
	node *root=newnode(a[mid]);
	root->left=arraytobst(a,s,mid-1);
	root->right=arraytobst(a,mid+1,e);
	return root;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		node *root;
		root=NULL;
		i=0;
		root=arraytobst(a,0,n-1);
		preorder(root);
		cout<<endl;
	}
}
