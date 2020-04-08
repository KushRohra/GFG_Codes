#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
	Node(int x)
	{
		data=x;
		next=NULL;
	}
};
struct Node * insert(int a[], int n)
{
	struct Node *head=NULL, *end;
	for(int i=0;i<n;i++)
	{
		struct Node *temp=new Node(a[i]);
		if(head==NULL)
		{
			head=temp;
			end=temp;
		}
		else
		{
			end->next=temp;
			end=temp;
		}
	}
	return head;
}
void print(struct Node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}
struct Node *deleteAllOcc(struct Node *head, int x)
{
	while(head && head->data==x)
	{
		head=head->next;
	}
	if(head==NULL || head->next==NULL)
		return head;
	struct Node *temp=head;
	while(temp->next!=NULL && temp->next->next!=NULL)
	{
		if(temp->next->data==x)
			temp->next=temp->next->next;
		else
			temp=temp->next;
	}
	if(temp->next->next==NULL && temp->next->data==x)
		temp->next=NULL;
	return head;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,k;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		cin>>k;
		struct Node *head=insert(a,n);
		print(deleteAllOcc(head, k));
	}
}
/*
	7
	5
	2 2 1 4 4 
	4
	6
	1 2 2 3 2 3
	2
	6
	1 2 2 3 2 3
	3
	4
	1 2 3 4
	5
	3
	1 1 1
	1
	5
	1 1 1 2 3
	1
	5
	1 1 1 1 2
	1
*/
