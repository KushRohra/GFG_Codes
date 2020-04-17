set<int> s;
while(head1!=NULL)
{
	s.insert(head1->data);
	head1=head1->next;
}
while(head2!=NULL)
{
	s.insert(head2->data);
	head2=head2->next;
}
struct node* head=NULL, *end;
set<int>::iterator it=s.begin()
for( ;it!=s.end();it++)
{
	if(head==NULL)
	{
		struct node *temp=new node(*it);
		head=temp;
		end=head;
	}
	else 
	{
		struct node *temp=new node(*it);
		end->next=temp;
		end=temp;
	}
}
return head;
