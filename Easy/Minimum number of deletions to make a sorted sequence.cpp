#include<bits/stdc++.h>
using namespace std;
int LIS(vector<int> A)
{
    int i, j, n=A.size();
    vector<int> dp(n,1);
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(A[i]>A[j])
            {
                dp[i]=max(dp[i],1+dp[j]);
            }
        }
    }
    return *max_element(dp.begin(), dp.end());
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        vector<int> v(n,0);
        for(i=0;i<n;i++)
            cin>>v[i];
        cout<<n-LIS(v)<<endl;
    }
}
