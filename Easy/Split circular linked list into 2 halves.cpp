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
int getlength(struct Node *head)
{
	int c=0;
	struct Node *temp=head;
	do
	{
		c++;
		temp=temp->next;
	}while(temp!=head);
	return c;
}
void split(struct Node *head, struct Node **head1, struct Node **head2)
{
	int x,y=getlength(head);
	if(y%2==0)
	{
		x=y/2;
		y-=x;
	}
	else
	{
		x=(y+1)/2;
		y-=x;	
	}
	struct Node *h1=NULL,*end,*t=head;
	for(int i=0;i<x;i++)
	{
		struct Node *temp=new Node(t->data);
		t=t->next;
		if(h1==NULL)
		{
			h1=temp;
			end=temp;
		}
		else
		{
			end->next=temp;
			end=temp;
		}	
	}
	end->next=h1;
	struct Node *h=NULL,*e;
	for(int i=0;i<y;i++)
	{
		struct Node *temp=new Node(t->data);
		t=t->next;
		if(h==NULL)
		{
			h=temp;
			e=temp;
		}
		else
		{
			e->next=temp;
			e=temp;
		}	
	}
	e->next=h;
	*head1=h1;
	*head2=h;
}
void print(struct Node *head)
{
	struct Node *temp=head;
	do
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}while(temp!=head);	
	cout<<endl;
}
int main()
{
	int n;
	cin>>n;
	int x,i;
	struct Node *head1=NULL,*head2=NULL,*head=NULL,*end;
	for(i=0;i<n;i++)
	{
		cin>>x;
		struct Node *temp=new Node(x);
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
	end->next=head;
	split(head,&head1,&head2);
	print(head1);
	print(head2);
}
