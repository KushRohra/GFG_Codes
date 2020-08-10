// { Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

Node* mergeKLists(Node* arr[], int N);

/* Function to print nodes in a given linked list */
void printList(Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	cout<<endl;
}

// Driver program to test above functions
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   int N;
	   cin>>N;
       struct Node *arr[N];
       for(int j=0;j<N;j++)
        {
           int n;
           cin>>n;

           int x;
           cin>>x;
           arr[j]=new Node(x);
           Node *curr = arr[j];
           n--;

           for(int i=0;i<n;i++)
           {
               cin>>x;
               Node *temp = new Node(x);
               curr->next =temp;
               curr=temp;
           }
   		}

   		Node *res = mergeKLists(arr,N);
		printList(res);

   }

	return 0;
}
// } Driver Code Ends


/*Linked list Node structure

struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/ 

/* arr[] is an array of pointers to heads of linked lists
  and N is size of arr[]  */
Node *merge(Node *h1, Node *h2)
{
    Node *head=NULL;
    if(h1==NULL)
        return h2;
    if(h2==NULL)
        return h1;
    if(h1->data<=h2->data)
    {
        head=h1;
        head->next=merge(h1->next, h2);
    }
    else
    {
        head=h2;
        head->next=merge(h1, h2->next);
    }
    return head;
}
Node * mergeKLists(Node *arr[], int N)
{
    int last=N-1;
    while(last!=0)
    {
        int i=0, j=last;
        while(i<j)
        {
            arr[i]=merge(arr[i], arr[j]);
            i++; j--;
            if(i>=j)
                last=j;
        }
    }
    return arr[0];
}


