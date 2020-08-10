#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        int dp[n];
        memset(dp,0,sizeof(dp));
        dp[0]=a[0];
        dp[1]=max(a[0],a[1]);
        for(i=2;i<n;i++)
            dp[i]=max(a[i]+dp[i-2], dp[i-1]);
        cout<<max(dp[n-1], dp[n-2])<<endl;
    }
}
