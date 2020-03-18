
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
struct node*update(struct node*start,int p)
{
    struct node *t=start,*last,*t1;
    while(t->next!=NULL)
        t=t->next;
    last=t;
    t=start;
    last->next=start;
    start->prev=last;
    while(p--)
        t=t->next;
    start=t;
    t1=t->prev;
    t1->next=NULL;
    t->prev=NULL;
    return start;
}
