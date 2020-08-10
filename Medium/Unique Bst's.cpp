int numTrees(int N) 
{
    vector<long long int> dp(N+1,0);
    long long int mod = 1000000007;
    int i, j;
    dp[0]=1;
    dp[1]=1;
    for(i=2;i<N+1;i++)
    {
        for(j=0;j<i;j++)
        {
            //cout<<j<<" "<<i-j-1<<endl;
            dp[i]=(dp[i]%mod)+((dp[j]%mod)*(dp[i-j-1])%mod)%mod;
        }
    }
    return dp[N]%mod;
}
