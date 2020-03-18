
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//function Template for C++
/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
  }
*/
// Should reverse list and return new head.
Node* reverseList(Node *head)
{
  struct Node *cur=head->next,*prev=NULL;
  while(cur!=NULL)
  {
      head->next=prev;
      prev=head;
      head=cur;
      cur=cur->next;
      head->next=prev;
  }
  return head;
}

