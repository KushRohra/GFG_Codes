#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
	int n;
	cin>>n;
	int a[n], i, max=INT_MIN;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
			max=a[i];
	}
	int dp[max+1];
	dp[0]=0;
	dp[1]=1;
	for(i=2;i<max+1;i++)
	{
		dp[i]=(((dp[i-1])%mod)+((dp[i-2])%mod))%mod;
	}
	for(i=0;i<n;i++)
		cout<<dp[a[i]]<<endl;
}
