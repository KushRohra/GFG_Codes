using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int x,sum=0,original_sum=0;
        for(i=0;i<n-1;i++)
        {
            cin>>x;
            sum+=x;  
        }
        original_sum=(n*(n+1))/2;
        cout<<original_sum-sum<<endl;
    }
