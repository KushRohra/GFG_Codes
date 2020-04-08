#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],max,x,i;
		for(i=0;i<n;i++)
			cin>>a[i];
		max=a[n-1];
		a[n-1]=-1;
		for(i=n-2;i>=0;i--)
		{
			if(a[i]>max)
			{
				x=max;
				max=a[i];
				a[i]=x;
			}
			else
			{
				a[i]=max;
			}
		}
		for(i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}
/*
2
6
16 17 4 3 5 2
4 
2 3 1 9
*/

