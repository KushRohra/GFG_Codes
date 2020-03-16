{
    int data;
    struct Node *next;
}; */
/* Function to print nodes in a given Circular linked list */
void printList(struct Node *head)
{
    struct Node *t=head;
    do
    {
        printf("%d ",t->data);
        t=t->next;
    }while(t!=head);
}

