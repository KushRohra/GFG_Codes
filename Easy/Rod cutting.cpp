#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        vector<int> price(n,0), dp(n+1,0);
        for(i=0;i<n;i++)
            cin>>price[i];
        for(i=1;i<=n;i++)
        {
            int m=INT_MIN;
            for(j=0;j<i;j++)
                m=max(m, price[j]+dp[i-j-1]);
            dp[i]=m;
        }
        cout<<dp[n]<<endl;
    }
}
