  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/
// root: head node
Node *removeDuplicates(Node *root)
{
    Node *t=NULL,*p,*head;
    while(root!=NULL)
    {
        if(t==NULL)
        {
            t=(Node*)malloc(sizeof(Node));
            t->data=root->data;
            t->next=NULL;
            head=t;
            root=root->next;
        }
        else
        {
            if(root->data==t->data)
            {
                root=root->next;
            }
            else
            {
                p=(Node*)malloc(sizeof(Node));
                p->data=root->data;
                t->next=p;
                t=p;
                t->next=NULL;
                root=root->next;
            }
        }
    }
    return head;
}
