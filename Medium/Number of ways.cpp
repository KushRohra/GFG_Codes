#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--) {
        int n,i;
        cin>>n;
        long long int dp[n];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        dp[1]=1;
        dp[2]=1;
        dp[3]=2;
        for(i=4;i<n;i++)
            dp[i]+=dp[i-1]+dp[i-4];
        cout<<dp[n-1]<<endl;
    }
}
