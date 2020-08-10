#include<bits/stdc++.h>
using namespace std;
int LPS(int n, string A, string B)
{
    int dp[n+1][n+1],i,j;
    for(i=0;i<n+1;i++)
    {
        for(j=0;j<n+1;j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;
            else if(A[i-1]==B[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[n][n];
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        string s,a;
        cin>>n>>s;
        a=s;
        reverse(a.begin(), a.end());
        cout<<n-LPS(n,s,a)<<endl;
    }
}