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
struct Node *arrange(struct Node *head)
{
	char x;
	struct Node *head1=NULL, *end1=NULL, *head2=NULL, *end2=NULL;
	while(head!=NULL)
	{
		x=head->data;
		if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
		{
			struct Node *temp=new Node(x);
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
		else
		{
			struct Node *temp=new Node(x);
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
		head=head->next;
	}
	if(head1==NULL)
		return head2;
	if(head2==NULL)
		return head1;
	end1->next=head2;
	return head1;
}
int main()
{
	int i,n;
	cin>>n;
	char k;
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
	print(head1);
	head1=arrange(head1);
	print(head1);
}
