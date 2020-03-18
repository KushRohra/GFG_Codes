 
/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// Function to merge the two sorted linked lists
// head1, head2: head of the two sorted linked lists
Node* sortedMerge(Node* head1,   Node* head2)
{
    Node *head=NULL,*tail=NULL;
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data<head2->data)
        {
            append(&head,&tail,head1->data);
            head1=head1->next;
        }
        else
        {
            append(&head,&tail,head2->data);
            head2=head2->next;
        }
    }
    while(head1!=NULL)
    {
        append(&head,&tail,head1->data);
        head1=head1->next;
    }
    while(head2!=NULL)
    {
        append(&head,&tail,head2->data);
        head2=head2->next;
    }
    return head;
}

