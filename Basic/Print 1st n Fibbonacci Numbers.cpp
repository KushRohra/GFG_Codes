#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,m=-1,i,j;
    cin>>n;
    vector<int> v(n,0);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
        m=max(m,v[i]);
    }
    vector<long long int> dp(m+1,0);
    dp[0]=1;
    dp[1]=1;
    for(i=2;i<m+1;i++)
        dp[i]=dp[i-1]+dp[i-2];
    for(i=0;i<n;i++)
    {
        int x=v[i];
        for(j=0;j<x;j++)
            cout<<dp[j]<<" ";
        cout<<endl;
    }
}
