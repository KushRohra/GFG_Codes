using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i,max=-1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(max<a[i])
                max=a[i];
        }
        int c[max];
        for(i=0;i<max;i++)
            c[i]=0;
        for(i=0;i<n;i++)
        {
            c[a[i]-1]++;
        }
        int b=0;
        for(i=0;i<max;i++)
        {
            if(c[i]%2==0)
            {
                b=b+c[i];
            }
            else b=b+c[i]-1;
        }
        cout<<b<<endl;
    }
}
