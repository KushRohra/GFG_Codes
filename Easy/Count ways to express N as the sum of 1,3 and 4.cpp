#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    long long int mod = 1e9+7;
    while(t--)
    {
        int n,i;
        cin>>n;
        vector<int> dp(n+1,0);
        dp[1]=1;
        dp[2]=1;
        dp[3]=2;
        dp[4]=4;
        for(int i=5;i<n+1;i++)
            dp[i]=(dp[i-1]%mod+dp[i-3]%mod+dp[i-4]%mod)%mod;
        cout<<dp[n]<<endl;
    }
}
