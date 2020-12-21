Node* findIntersection(Node* head1, Node* head2) {
    Node *head=NULL, *end=NULL;
    int x;
    while(head1 && head2) {
        if(head1->data == head2->data) {
            x=head1->data;
            head1=head1->next;
            head2=head2->next;
            Node *p = new Node(x);
            if(head==NULL) {
                head=p;
                end=p;
            }
            else {
                end->next=p;
                end=p;
            }
        }
        else if(head1->data < head2->data)
            head1=head1->next;
        else
            head2=head2->next;
    }
    return head;
}