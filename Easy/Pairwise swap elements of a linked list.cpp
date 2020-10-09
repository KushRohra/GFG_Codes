Node* pairWiseSwap(struct Node* head) {
    Node *t=head;
    while(head) {
        if(head->next) {
            swap(head->data,head->next->data);
            head=head->next->next;
        }
        else break;
    }
    return t;
}
