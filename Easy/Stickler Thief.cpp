using namespace std;
int max(int a,int b)
{
    if(a>=b)
        return a;
    else return b;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        int dp[n+1];
        dp[0]=0;
        for(i=1;i<n+1;i++)
        {
            int p,q;
            p=dp[i-2]+a[i-1];
            q=dp[i-1];
            if(i==1)
                p=a[i-1];
            dp[i]=max(p,q);
        }
        cout<<dp[n]<<endl;
    }
}
