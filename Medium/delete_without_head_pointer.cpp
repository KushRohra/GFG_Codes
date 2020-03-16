
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/
// This function should delete node from linked list. The function
// may assume that node exists in linked list and is not last node
// node: reference to the node which is to be deleted
void deleteNode(Node *node)
{
	int f=0;
	while(node->next->next!=NULL)
	{
		f=1;
		node->data=node->next->data;
		node=node->next;
	}
	node->data=node->next->data;
	if(f==0)
		node->data=node->next->data;
	node->next=NULL;
}
