#include<bits/stdc++.h>
using namespace std;
int editDistance(string word1, string word2)
{
    int i, j, n=word1.length(), m=word2.length();
    int dp[n+1][m+1];
    dp[0][0]=0;
    for(i=0;i<n+1;i++)
        dp[i][0]=i;
    for(j=0;j<m+1;j++)
        dp[0][j]=j;
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<m+1;j++)
        {
            if(word1[i-1]==word2[j-1])
                dp[i][j]=dp[i-1][j-1];
            else 
                dp[i][j]=1+min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1]));
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
        int n, m;
        cin>>n>>m;
        string s1, s2;
        cin>>s1>>s2;
        cout<<editDistance(s1,s2)<<endl;
    }
}
