/*
  Return the no. of times search_for data is there in a linked list.
  The input list will have at least one element  
  Node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }
*/
int count(struct node *node, int search_for)
{
	int c=0;
	while(node!=NULL)
	{
		if(node->data==search_for)
			c++;
		node=node->next;
	}
	return c;
}
