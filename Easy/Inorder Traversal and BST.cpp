using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i,f=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]<=0)
                f=1;
            if(f==1)
                break;
        }
        cout<<1-f<<endl;
    }
}
