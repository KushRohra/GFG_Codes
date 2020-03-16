
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
struct Node
{
    int data;
    struct Node* next;
};
 
*/
// head : reference to head of linked list
int getCount(struct Node* head){
    int c=1;
    while(head->next!=NULL)
    {
        c++;
        head=head->next;
    }
    return c;
}
