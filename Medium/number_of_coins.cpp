#include<bits/stdc++.h>
using namespace std;
int coinchange(vector<int> coins, int amount)
{
     if(amount == 0)
        return 0;
    vector<int> dp(amount+1, INT_MAX);
    for(int i=0;i<coins.size();i++)
        if(coins[i]<amount+1)
           dp[coins[i]]=1;
    for(int i=1;i<amount+1;i++)
    {
        if(dp[i]!=1)
        {
            for(int j=0;j<coins.size();j++)
            {
                if(i-coins[j]>0 && dp[i-coins[j]]!=INT_MAX)
                {
                    if(dp[i]>dp[i-coins[j]]+1)
                        dp[i]=dp[i-coins[j]]+1;
                }
            }
        }
    }
    /*for(int i=0;i<amount+1;i++)
        cout<<dp[i]<<" ";*/
    if(dp[amount]==INT_MAX)
        return -1;
    else return dp[amount];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, v, x;
        cin>>n>>v;
        vector<int> coins;
        for(int i=0;i<v;i++)
        {
            cin>>x;
            coins.push_back(x);
        }
        cout<<coinchange(coins, n)<<endl;
    }
