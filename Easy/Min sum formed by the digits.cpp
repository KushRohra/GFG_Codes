using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,sum1=0,sum2=0,x,c[10];
        cin>>n;
        int a[n];
        for(i=0;i<10;i++)
            c[i]=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            c[a[i]]++;
        }
        int f=0;
        for(i=0;i<10;i++)
        {
            while(c[i]!=0)
            {
                if(f==0)
                {
                    f=1;
                    sum1=sum1*10+i;
                    c[i]--;
                }
                if(f==1 && c[i]!=0)
                {
                    f=0;
                    sum2=sum2*10+i;
                    c[i]--;
                }
            }
        }
        cout<<sum1+sum2<<endl;
    }
}
