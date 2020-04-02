#include<bits/stdc++.h>
using namespace std;
int sets(int n)
{
	int c=0;
	while(n)
	{
		n&=(n-1);
		c++;
	}
	return c;
}
int main()
{
	int n;
	cin>>n;
	int a[n],i,max=INT_MIN;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
			max=a[i];
	}
	int sum[max+1]={0};
	for(i=1;i<=max;i++)
	{
		sum[i]=sets(i)+sum[i-1];
	}
	for(i=0;i<n;i++)
		cout<<sum[a[i]]<<" ";
}
