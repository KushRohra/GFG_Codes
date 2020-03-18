using namespace std;
int main()
{
    long long int i,j,dp[101][101];
    for(i=0;i<101;i++)
    {
        dp[i][0]=1;
        dp[0][i]=1;
    }
    for(i=1;i<101;i++)
    {
        for(j=1;j<101;j++)
        {
            dp[i][j]=(dp[i-1][j]+dp[i][j-1])%1000000007;
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        cout<<dp[n-1][m-1]<<endl;
    }
}
