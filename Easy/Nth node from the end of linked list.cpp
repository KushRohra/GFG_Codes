/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/* Should return data of n'th node from the end of linked list.
*  head: head of the linked list
*  n: nth node from end to find
*/
int getcount(Node *head)
{
    int c=0;
    while(head!=NULL)
    {
        c++;
        head=head->next;
    }
    return c;
}
int getNthFromLast(Node *head, int n)
{
     int c,d;
     c=getcount(head);
     if(n>c)
        return -1;
    else
    {
        d=c-n;
        while(d!=0)
        {
            d--;
            head=head->next;
        }
        return head->data;
    }
}

