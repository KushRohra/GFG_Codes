{
    int i=0;
    struct Node *t;
    while(head!=NULL)
    {
        if(i==0)
        {
            i=1;
            t=head->next;
            if(t!=NULL)
                head->next=t->next;
        }
        else
        {
            i=0;
            head=head->next;
        }
    }
}

