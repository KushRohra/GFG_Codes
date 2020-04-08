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
void print(struct node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}
struct node *rev(struct node *head)
{
	struct node *prev=NULL, *curr=head, *next;
	while(curr!=NULL)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	return prev;
}
struct node *reverse(struct node *head, int k)
{
	int f=0,n;
	struct node *head1=NULL, *end1;
	while(head!=NULL)
	{
		n=k;
		struct node *h1=NULL, *e1;
		while(n-- && head!=NULL)
		{
			struct node *temp=new node(head->data);
			if(h1==NULL)
			{
				h1=temp;
				e1=temp;	
			}	
			else
			{
				e1->next=temp;
				e1=temp;
			}
			head=head->next;
		}
		h1=rev(h1);
		struct node *end=h1;
		while(end->next!=NULL)
			end=end->next;
		if(f==0)
		{
			f=1;
			head1=h1;
			end1=end;
		}
		else
		{
			end1->next=h1;
			end1=end;
		}
	}
	return head1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int k,a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		struct node *head=insert(a,n);
		cin>>k;
		print(reverse(head, k));
	}
}
/*
	2
	8
	1 2 2 4 5 6 7 8
	4
	5
	1 2 3 4 5
	3
*/
