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
	while(head)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}
int getlength(struct node *head)
{
	int c=0;
	while(head)
	{
		c++;
		head=head->next;
	}
	return c;
}
struct node *rotate(struct node *head, int k)
{
	int n=getlength(head);
	k=k%n;
	if(k==0)
		return head;
	struct node *end=head, *t=head, *t1;
	while(end->next!=NULL)
		end=end->next;
	k--;
	while(k)
	{	
		t=t->next;
		k--;
	}
	t1=t->next;
	end->next=head;
	t->next=NULL;
	head=t1;
	return head;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int a[n],k;
		for(i=0;i<n;i++)
			cin>>a[i];
		struct node *head=insert(a,n);
		cin>>k;
		print(rotate(head, k));
	}
}
