#include<bits/stdc++.h>
using namespace std;
int mindiff(vector<int> v)
{
    int sum=0,i,n=v.size(),j;
    for(i=0;i<n;i++)
        sum+=v[i];
    bool dp[n+1][sum+1];
    for(i=0;i<=n;i++)
        dp[i][0]=true;
    for(i=1;i<=sum;i++) 
        dp[0][i]=false; 
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sum;j++)
        {
            if(v[i-1]<=j)
                dp[i][j]=dp[i-1][j] || dp[i-1][j-v[i-1]];
            else dp[i][j]=dp[i-1][j];
        }
    }
    int mn=INT_MAX;
    for(i=sum/2;i>=0;i--)
    {
        if(dp[n][i]==true)
            mn=min(mn, sum-2*i);
    }
    return mn;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        vector<int> v(n,0);
        for(i=0;i<n;i++)
            cin>>v[i];
        cout<<mindiff(v)<<endl;
    }
}
