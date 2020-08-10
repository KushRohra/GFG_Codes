Node *sortedInsert(struct Node* head, int data) {
    Node *temp=new Node(data);
    if(!head)
        return temp;
    if(data<head->data) {
        temp->next=head;
        head=temp;
    }
    else {
        Node *t=head, *prev=NULL;
        while(t && t->data<=data) {
            prev=t;
            t=t->next;
        }
        temp->next=prev->next;
        prev->next=temp;
    }
    return head;
}

