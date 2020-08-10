#include<bits/stdc++.h>
using namespace std;
int knapsack(int n, int w, vector<int> profit, vector<int> weight)
{
    int i,j,dp[n+1][w+1];
    for(i=0;i<n+1;i++)
    {
        for(j=0;j<w+1;j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;
            else if(weight[i-1]>j)
                dp[i][j]=dp[i-1][j];
            else 
                dp[i][j]=max(dp[i-1][j], profit[i-1]+dp[i][j-weight[i-1]]);
        }
    }
    return dp[n][w];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,w,i,j;
        cin>>n>>w;
        vector<int> profit(n,0), weight(n,0);
        for(i=0;i<n;i++)
            cin>>profit[i];
        for(i=0;i<n;i++)
            cin>>weight[i];
        cout<<knapsack(n,w,profit,weight)<<endl;
    }
}