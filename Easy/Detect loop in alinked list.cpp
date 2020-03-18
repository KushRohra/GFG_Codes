struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
*/
int detectloop(Node *head) 
{
    Node *t=head,*h=head;
    while(t!=NULL && h!=NULL)
    {
        if(h->next!=NULL)
            h=h->next->next;
        else return false;
        t=t->next;
        if(h!=NULL && t!=NULL && h==t)
            return true;
    }
    return false;
}

