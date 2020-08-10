Node *copyList(Node *head) {
    Node *next, *temp = head, *copyHead;
    bool f=0;
    while(temp) {
        Node *t=new Node(temp->data);
        if(!f) {
            f=1;
            copyHead=t;
        }
        next=temp->next;
        temp->next=t;
        temp=next;
    }
    temp=head;
    while(temp) {
        if(temp->arb)
            temp->next->arb = temp->arb->next;
        else temp->next->arb=NULL;
        temp=temp->next->next;
    }
    temp=head;
    while(temp) {
        Node *t=temp->next->next;
        if(temp->next->next) 
            temp->next->next=temp->next->next->next;
        else temp->next=NULL;
        temp->next=t;
        temp=temp->next;
    }
    return copyHead;
}
