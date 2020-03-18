{
    int i=0;
    struct node *t1=*aRef,*t2=*bRef;
    while(headRef!=NULL)
    {
        if(i==0)
        {
            append(&t1,headRef->data);
            *aRef=t1;
            i=1;
        }
        else
        {
            append(&t2,headRef->data);
            *bRef=t2;
            i=0;
        }
        headRef=headRef->next;
    }
}
