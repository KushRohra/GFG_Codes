#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int a[n], min=INT_MIN;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>min)
				min=a[i];
		}
		int sum=0, max_sum=INT_MIN, sum1=0;
		for(i=0;i<n;i++)
		{
			sum+=a[i];
			if(max_sum<sum)
			    max_sum=sum;
			if(sum<0)
			    sum=0;
		}
		cout<<max_sum<<endl;
	}
}
