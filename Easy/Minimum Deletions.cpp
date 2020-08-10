#include <bits/stdc++.h>
using namespace std;
int LPS(string A, string B)
{
    int n=A.length(), m=B.length(), i, j;
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    for(i=0;i<n+1;i++)
    {
        for(j=0;j<m+1;j++)
        {
            if(i==0 || j==0)
                continue;
            if(A[i-1]==B[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[n][m];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,a;
        cin>>s;
        a=s;
        reverse(a.begin(), a.end());
        cout<<s.length()-LPS(s,a)<<endl;
    }
}
