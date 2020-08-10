#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        vector<int> low(n,0), high(n,0);
        for(i=0;i<n;i++)
            cin>>high[i];
        for(i=0;i<n;i++)
            cin>>low[i];
        int dp[n+2];
        memset(dp,0,sizeof(dp));
        for(i=2;i<n+2;i++)
        {
            dp[i]=max(dp[i-1]+low[i-2], dp[i-2]+high[i-2]);
        }
        cout<<dp[n+1]<<endl;
    }
}