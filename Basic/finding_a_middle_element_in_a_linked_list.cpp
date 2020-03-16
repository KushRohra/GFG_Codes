    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */
/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
   Node *fast=head,*slow=head;
   while(fast!=NULL)
   {
       fast=fast->next;
       if(fast!=NULL)
            fast=fast->next;
       else break;
       slow=slow->next;
   }
   return slow->data;
}
