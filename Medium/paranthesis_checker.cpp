using namespace std;
#include<string.h>
#include<stdlib.h>
typedef struct node
{
    char s;
    struct node *next;
}node;
node *top=NULL;
node *ini(char s)
{
    node *t;
    t=(node*)malloc(sizeof(node));
    t->s=s;
    t->next=NULL;
    top=t;
}
node *push(node *t,char s)
{
    if(t==NULL)
        ini(s);
    else
    {
        node *t1;
        t1=(node*)malloc(sizeof(node));
        t1->s=s;
        t1->next=top;
        top=t1;
    }
}
int pop(node *t,char s1)
{
    int d=0;
    if(t==NULL)
        d=-1;
    else
    {
        char s;
        s=t->s;
        t=t->next;
        top=t;
        if(s==s1)
            d=1;
    }
    return d;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s[100000];
        int i,l,f=0;
        top=NULL;
        cin>>s;
        l=strlen(s);
        for(i=0;i<l;i++)
        {
           if(s[i]=='[' || s[i]=='{' || s[i]=='(')
           {
               push(top,s[i]);
           }
           else
           {
               int d;
               d=pop(top,s[i]);
               if(d==1 || d==-1)
                    f=1;
           }
           if(f==1)
            break;
        }
        if(f==0)
        {
            if(top!=NULL)
                f=1;
        }
        if(f==1)
            cout<<"not balanced"<<endl;
        else cout<<"balanced"<<endl;
    }
