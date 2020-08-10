#include <bits/stdc++.h>
using namespace std;
bool divide(vector<int> A, int sum)
{
    int i,j,n=A.size();
    bool dp[n+1][sum+1];
    memset(dp,false,sizeof(dp));
    for(i=0;i<n+1;i++)
        dp[i][0]=true;
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<sum+1;j++)
        {
            if(A[i-1]>j)
                dp[i][j]=dp[i-1][j];
            else 
                dp[i][j]=dp[i-1][j] || dp[i-1][j-A[i-1]];
        }
    }
    return dp[n][sum];
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,sum=0;
        cin>>n;
        vector<int> v(n,0);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        if(sum%2)
            cout<<"NO"<<endl;
        else
        {
            string s="";
            divide(v,sum/2)==1 ? s="YES" : s="NO"; 
            cout<<s<<endl;
        }
    }
}
