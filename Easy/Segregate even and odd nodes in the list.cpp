using namespace std;
typedef struct node
{
    int d;
    struct node *next;
}node;
node *even=NULL,*odd=NULL;
node *ini(int x)
{
    node *t=(node*)malloc(sizeof(node));
    t->d=x;
    t->next=NULL;
    if(x%2==0)
        even=t;
    else odd=t;
}
node *enque(node *t,int x)
{
    if(t==NULL)
        ini(x);
    else
    {
        node *t1=(node*)malloc(sizeof(node));
        t1->next=NULL;
        t1->d=x;
        while(t->next!=NULL)
            t=t->next;
        t->next=t1;
    }
}
void print(node *t)
{
    while(t!=NULL)
    {
        cout<<t->d<<" ";
        t=t->next;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        even=NULL;
        odd=NULL;
        int n,x;
        cin>>n;
        while(n--)
        {
            cin>>x;
            if(x%2==0)
            {
                enque(even,x);
            }
            else
            {
                enque(odd,x);
            }
        }
        print(even);
        print(odd);
        cout<<endl;
    }
}
