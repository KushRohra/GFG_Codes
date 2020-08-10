#include<bits/stdc++.h>
using namespace std;
int knapsack(int n, int w, vector<int> weight, vector<int> profit)
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
            else dp[i][j]=max(dp[i-1][j-weight[i-1]]+profit[i-1], dp[i-1][j]);
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
        int n,i,w;
        cin>>n>>w;
        vector<int> weight(n,0), profit(n,0);
        for(i=0;i<n;i++)
            cin>>profit[i];
        for(i=0;i<n;i++)
            cin>>weight[i];
        cout<<knapsack(n,w,weight,profit)<<endl;
    }
}
