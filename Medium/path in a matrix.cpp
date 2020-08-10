#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,n;
        cin>>n;
        vector<vector<int> > cost(n, vector<int> (n, 0)), dp;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>cost[i][j];
        dp=cost;
        for(i=1;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j==0)
                    dp[i][j]=cost[i][j]+max(dp[i-1][j], dp[i-1][j+1]);
                else if(j==n-1)
                    dp[i][j]=cost[i][j]+max(dp[i-1][j], dp[i-1][j-1]);        
                else
                    dp[i][j]=cost[i][j]+max(max(dp[i-1][j], dp[i-1][j-1]), dp[i-1][j+1]);
            }
        }
        int mn=INT_MIN;
        for(j=0;j<n;j++)
            mn=max(mn, dp[n-1][j]);
        cout<<mn<<endl;
    }
}
