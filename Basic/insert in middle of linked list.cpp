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
void print(struct Node *head)
{
	struct Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int getlength(struct Node *head)
{
	struct Node *temp=head;
	int c=0;
	while(temp!=NULL)
	{
		c++;
		temp=temp->next;
	}
	return c;
}
struct Node *insertMiddle(struct Node *head, int x)
{
	struct Node *slow=head, *fast=head;
	int n=getlength(head);
	if(n%2==0)
	    fast=fast->next;
    while(fast && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
	struct Node *temp=new Node(x);
	temp->next=slow->next;
	slow->next=temp;
	return head;
}
int main()
{
	int i,n,k;
	cin>>n;
	struct Node *head1=NULL,*end1;
	for(i=0;i<n;i++)
	{
		cin>>k;
		struct Node *temp=new Node(k);
		if(head1==NULL)
		{
			head1=temp;
			end1=temp;
		}
		else
		{
			end1->next=temp;
			end1=temp;
		}	
	}
	cin>>k;
	print(insertMiddle(head1, k));
}
