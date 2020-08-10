#include<bits/stdc++.h>
using namespace std;
long long int dp[106][106];
long long int solve(long long int sum1, long long int sum2, int n1, int n2, vector<int> w1, vector<int> w2, int curr)
{
    if(curr>=w1.size())
        return 0;
    if(dp[n1][n2]!=-1)
        return dp[n1][n2];
    long long int temp1=INT_MIN, temp2=INT_MIN;
    if(n1>0 && n2>0)
        return dp[n1][n2]=max(w1[curr]+solve(sum1, sum2, n1-1,n2,w1,w2,curr+1), w2[curr]+solve(sum1,sum2,n1,n2-1,w1,w2,curr+1));
    if(n1>0)
        return dp[n1][n2]=max(sum1+sum2, w1[curr]+solve(sum1,sum2,n1-1,n2,w1,w2,curr+1));
    if(n2>0)
        return dp[n1][n2]=max(sum1+sum2, w2[curr]+solve(sum1,sum2,n1,n2-1,w1,w2,curr+1));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        int n,i,x,y;
        cin>>n>>x>>y;
        vector<int> w1(n,0), w2(n,0);
        long long int sum1=0, sum2=0;
        int curr=0;
        for(i=0;i<n;i++)
            cin>>w1[i];
        for(i=0;i<n;i++)
            cin>>w2[i];
        cout<<solve(sum1,sum2,x,y,w1,w2,curr)<<endl;
    }
}
