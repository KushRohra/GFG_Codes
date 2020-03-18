using namespace std;
#include<stdlib.h>
#include<string.h>
typedef struct node
{
    int d;
    struct node *next;
}node;
node *top=NULL;
node *ini()
{
    node *t;
    t=(node*)malloc(sizeof(node));
    t->d=1;
    t->next==NULL;
    top=t;
}
node *push(node *t)
{
    if(t==NULL)
        ini();
    else
    {
        node *t1;
        t1=(node*)malloc(sizeof(node));
        t1->d=1;
        t1->next=top;
        top=t1;
    }
}
int isempty()
{
    if(top==NULL)
        return -1;
    else return 1;
}
int pop(node *t)
{
    top=t->next;
}
int size(node *t)
{
    int c=0;
    while(t!=NULL)
    {
        c++;
        t=t->next;
    }
    return c;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int c=0,f=0,n,l,i;
	    top=NULL;
	    char s[50];
	    cin>>s;
	    l=strlen(s);
	    for(i=0;i<l;i++)
	    {
	        if(s[i]=='{')
	        {
	            push(top);
	        }
	        else
	        {
	            if(isempty()==-1)
	            {
	                push(top);
	                c++;
	            }
	            else
	            {
	                pop(top);
	            }
	        }
	    }
	    if(isempty()==1)
	     {
	         int d=size(top);
	         if(d%2==0)
	            c=c+d/2;
	         else 
	            c=-1;
	         cout<<c<<endl;
	     }
	    else cout<<c<<endl;
	}
}
