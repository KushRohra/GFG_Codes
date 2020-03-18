{
    int n=0,i;
    struct Node *t=head;
    while(t!=NULL)
    {
        n++;
        t=t->next;
    }
    t=head;
    if(x==1)
    {
        head=head->next;
    }
    else
    {
        for(i=0;i<x-2;i++)
            t=t->next; 
        if(x==n)
            t->next=NULL;
        else
        {
            t->next=t->next->next;
        }
    }
    return head;
}

