using namespace std;
int maxno(int a,int b)
{
    return (a>b)?a:b;
}
int main() 
{
    int n;
    cin>>n;
    int i,a[n],max=-1;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }
    int dp[max+1];
    dp[1]=1;
    dp[0]=0;
    for(i=2;i<max+1;i++)
    {
        dp[i]=maxno(dp[i/2]+dp[i/3]+dp[i/4],i);
    }
    for(i=0;i<n;i++)
    {
        cout<<dp[a[i]]<<endl;
    }
}
