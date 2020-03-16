{
   if(head==NULL)
   {
       struct Node *t;
       t=new Node(newData);
       head=t;
   }
   else
   {
       struct Node *t1;
       t1=new Node(newData);
       t1->next=head;
       head=t1;
   }
   return head;
}
Node *insertAtEnd(Node *head, int newData)  
{
   if(head==NULL)
   {
       struct Node *t;
       t=new Node(newData);
       head=t;
   }
   else
   {
       struct Node *t1=head,*t2;
       while(t1->next!=NULL)
            t1=t1->next;
        t2=new Node(newData);
        t1->next=t2;
   }
   return head;
}

