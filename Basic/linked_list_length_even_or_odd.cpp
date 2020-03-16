{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/
// Function should return 0 is length is even else return 1
int isLengthEvenOrOdd(struct Node* head)
{
     int c=1;
     while(head!=NULL)
     {
         head=head->next;
         c++;
     }
     return c%2==0;
