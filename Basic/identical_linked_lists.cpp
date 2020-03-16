{
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data==head2->data)
        {
            head1=head1->next;
            head2=head2->next;
        }
        else 
        {
            return 0;
        }
    }
    return 1;
