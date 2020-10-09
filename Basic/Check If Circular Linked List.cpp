bool isCircular(Node *head) {
   Node *temp=head;
   while(temp) {
       if(temp->next==head)
          return 1;
       temp=temp->next;
   }
   return 0;
}
