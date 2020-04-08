#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
	node(int x)
	{
		data=x;
		next=NULL;
	}
};
struct node * insert(int a[], int n)
{
	struct node *head=NULL, *end;
	for(int i=0;i<n;i++)
	{
		struct node *temp=new node(a[i]);
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
struct node *deleteMid(struct node *head)
{
	struct node *slow=head, *fast=head;
	while(fast && fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	if(head==slow)
		return NULL;
	struct node *h=head;
	while(h->next!=slow)	
	{
		h=h->next;
	}
	h->next=h->next->next;
	return head;
}
void print(struct node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
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
		struct node *head=insert(a,n);
		print(deleteMid(head));
	}
}
/*
	2
	5
	1 2 3 4 5
	6
	2 4 6 7 5 1
*/
