{
    int i=0;
    struct Node *t=head,*t1,*temp;
    for(i=0;i<pos;i++)
        t=t->next;
    t1=new Node(data);
    temp=t->next;
    if(temp!=NULL)
    {
        t1->next=t->next;
        t->next->prev=t1;
        t1->prev=t;
        t->next=t1;        
    }
    else
    {
        t1->prev=t;
        t->next=t1;
    }
}
