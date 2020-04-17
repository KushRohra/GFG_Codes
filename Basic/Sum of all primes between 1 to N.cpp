#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int max=INT_MIN, a[n], i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
			max=a[i];
	}
	vector<int> dp(max+1, 0);
	for(i=0;i<max+1;i++)
		dp[i]=1;
	dp[0]=0;
	dp[1]=0;
	for(i=2;i<max+1;i++)
	{
		if(dp[i]==1)
		{
			for(int j=2, k=i;j*k<=max+1;j++)
				dp[j*k]=0;
		}
	}
	vector<int> sum(max+1, 0);
	int sum1=0;
	for(i=0;i<max+1;i++)
	{
		if(dp[i]==1)
			sum1=sum1+i;
		sum[i]=sum1;
	}
	for(i=0;i<n;i++)
	{
		cout<<sum[a[i]]<<endl;
	}
}
