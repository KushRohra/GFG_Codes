#include<bits/stdc++.h>
using namespace std;
struct Node
{
	char data;
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
int compare(Node *head1, Node *head2)
{
	while(head1!=NULL && head2!=NULL)
	{
		if(head1->data!=head2->data)
		{
			if(int(head1->data)>int(head2->data))
				return 1;
			else return -1;
		}	
		head1=head1->next;
		head2=head2->next;
	}
	if(head1!=NULL)
		return 1;
	if(head2!=NULL)
		return -1;
	return 0;
}
int main()
{
	int i;
	string s1,s2;
	cin>>s1>>s2;
	struct Node *head1=NULL,*end1;
	for(i=0;i<s1.length();i++)
	{
		struct Node *temp=new Node(s1[i]);
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
	struct Node *head2=NULL,*end2;
	for(i=0;i<s2.length();i++)
	{
		struct Node *temp=new Node(s2[i]);
		if(head2==NULL)
		{
			head2=temp;
			end2=temp;
		}
		else
		{
			end2->next=temp;
			end2=temp;
		}	
	}
	cout<<compare(head1, head2);
}
