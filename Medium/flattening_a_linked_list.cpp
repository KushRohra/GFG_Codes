/* Node structure  used in the program
struct Node{
	int data;
	struct Node * next;
	struct Node * bottom ;
}; */
/*  Function which returns the  root of 
    the flattened linked list. */
Node *flatten(Node *root)
{
   Node *t,*t1,*temp;
   t=root;
   multiset<int> s;
   while(t!=NULL)
   {
       t1=t;
       while(t1!=NULL)
       {
           s.insert(t1->data);
           t1=t1->bottom;
       }
       t=t->next;
   }
   t1=NULL;
   t=NULL;
   for(auto k=s.begin();k!=s.end();k++)
   {
       if(t1==NULL && t==NULL)
       {
           temp=(struct Node*)malloc(sizeof(struct Node));
           temp->data=*k;
           temp->next=NULL;
           temp->bottom=NULL;
           t1=temp;
           t=temp;
       }
       else
       {
           temp=(struct Node*)malloc(sizeof(struct Node));
           temp->data=*k;
           temp->next=NULL;
           temp->bottom=NULL;
           t1->bottom=temp;
           t1=temp;
       }
   }
   return t;
