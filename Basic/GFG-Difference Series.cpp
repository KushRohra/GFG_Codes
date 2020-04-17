#include<bits/stdc++.h>
using namespace std;
int main()
{

	int n;
	cin>>n;
	int i,a[n],max=INT_MIN;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
			max=a[i];
	}
	int b[n];
	int d1=4,d=7;
	b[0]=3;
	for(i=1;i<max;i++)
	{
		b[i]=b[i-1]+d;
		d=d+d1;
	}
	for(i=0;i<n;i++)
		cout<<b[a[i]-1]<<" ";
	cout<<endl;
}
