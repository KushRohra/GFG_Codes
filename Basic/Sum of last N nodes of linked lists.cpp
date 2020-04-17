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
struct Node *reverse(struct Node *head)
{
	struct Node *prev=NULL, *curr=head, *next=NULL;
	while(curr!=NULL)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	return prev;
}
int sumoflastN(struct Node *head, int n)
{
	head=reverse(head);
	int sum=0;
	while(n--)
	{
		sum+=head->data;
		head=head->next;
	}
	return sum;
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
	cout<<sumoflastN(head1,k)<<endl;
}
