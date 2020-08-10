int len(Node *head) {
    int c=0;
    while(head) {
        head=head->next;
        c++;
    }
    return c;
}
int intersectPoint(Node* head1, Node* head2) {
    int d1=len(head1);
    int d2=len(head2);
    int diff;
    if(d1>d2) {
        diff=d1-d2;
        while(diff--)
            head1=head1->next;
    }
    else {
        diff=d2-d1;
        while(diff--)
            head2=head2->next;
    }
    while(head1!=head2 && head1 && head2) {
        head1=head1->next;
        head2=head2->next;
    }
    if(head1==head2)
        return head1->data;
    return -1;
}

