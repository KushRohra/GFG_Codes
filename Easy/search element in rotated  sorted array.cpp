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
		int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		int s=0,e=n-1,index=-1,mid;
		while(s<=e)
		{
			mid=s+(e-s)/2;
			if(mid==0)
				if(a[mid]<a[mid+1])
				{
					index=mid;
					break;
				}
			if(mid==n-1)
				if(a[mid]<a[mid-1])
				{
					index=mid;
					break;
				}
			if(a[mid]<a[mid+1] && a[mid]<a[mid-1])
			{
				index=mid;
				break;
			}
			else
				if(a[mid]>a[n-1])
					s=mid+1;
				else e=mid-1;
		}
		int x;
		cin>>x;
		if(x>=a[index] && x<=a[n-1])
		{
			s=index;
			e=n-1;
		}
		else
		{
			s=0;
			e=index-1;
		}
		index=-1;
		while(s<=e)
		{
			mid=s+(e-s)/2;
			if(a[mid]==x)
			{
				index=mid;
				break;
			}
			else if(a[mid]>x)
				e=mid-1;
			else s=mid+1;
		}
		cout<<index<<" ";
	}
}
/*
	1
	10
	4 5 6 7 8 9 10 1 2 3 
	7
*/
