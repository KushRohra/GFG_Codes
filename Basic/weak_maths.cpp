using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,max=-1,min=99999999,x,f=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x<min)
                min=x;
            if(x>max)
                max=x;
        }
        for(i=max;i<=min*max;i++)
        {
            if(i%min==0 && i%max==0)
            {
                f=1;
                x=i;
            }
            if(f==1)
                break;
        }
        cout<<x<<endl;
    }
