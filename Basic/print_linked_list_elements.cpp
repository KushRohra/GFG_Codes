  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     Node *next;
  }
*/
void display(Node *head)
{
    while(head!=NULL)
        cout<<head->data<<" ",head=head->next;
}
