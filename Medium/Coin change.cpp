#include <iostream>
using namespace std;
int coinchange2(int amount, int a[], int n)
{
    int i,j,dp[amount+1]={0};
    dp[0]=1;
    for(i=0;i<n;i++)
        for(j=a[i];j<=amount;j++)
            dp[j]+=dp[j-a[i]];
    return dp[amount];
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,amount;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>amount;
        cout<<coinchange2(amount, a, n)<<endl;
    }
}
