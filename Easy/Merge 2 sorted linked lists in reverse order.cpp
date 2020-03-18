/*
The structure of linked list is the following
struct Node
{
int data;
Node* next;
};
*/
struct Node *mergeResult(Node *node1,Node *node2)
{
	Node *head=NULL,*temp;
	int a;
	while(node1!=NULL && node2!=NULL)
	{
		if(node1->data<node2->data)
		{
			a=node1->data;
			node1=node1->next;
		}
		else
		{
			a=node2->data;
			node2=node2->next;
		}
		if(head==NULL)
		{
			Node *h=(Node*)malloc(sizeof(Node));
			h->data=a;
			h->next=NULL;
			head=h;
		}
		else
		{
			Node *h=(Node*)malloc(sizeof(Node));
			h->data=a;
			h->next=head;
			head=h;
		}
	}
	while(node1!=NULL)
	{
		a=node1->data;
		node1=node1->next;
		if(head==NULL)
		{
			Node *h=(Node*)malloc(sizeof(Node));
			h->data=a;
			h->next=NULL;
			head=h;
		}
		else
		{
			Node *h=(Node*)malloc(sizeof(Node));
			h->data=a;
			h->next=head;
			head=h;
		}
	}
	while(node2!=NULL)
	{
		a=node2->data;
		node2=node2->next;
		if(head==NULL)
		{
			Node *h=(Node*)malloc(sizeof(Node));
			h->data=a;
			h->next=NULL;
			head=h;
		}
		else
		{
			Node *h=(Node*)malloc(sizeof(Node));
			h->data=a;
			h->next=head;
			head=h;
		}
	}
	return head;
}

