#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j;
        cin>>n>>m;
        int dp[n][m];
        memset(dp,0,sizeof(dp));
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                if(i==0 || j==0)
                    dp[i][j]=1;
                else dp[i][j]=(dp[i-1][j]+dp[i][j-1]);
        cout<<dp[n-1][m-1]<<endl;
    }
}