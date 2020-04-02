#include<bits/stdc++.h>
using namespace std;
int countzero(int a[], int n)
{
	if(a[0]==0)
		return n;
	if(a[n-1]==1)
		return 0;
	int s=0, e=n-1, mid, index;
	while(s<=e)
	{
		mid=s+(e-s)/2;
		if(a[mid]==0)
			e=mid-1;
		if(a[mid]==1)
			s=mid+1;
	}
	return n-s;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],i;
		for(i=0;i<n;i++)
			cin>>a[i];
		cout<<countzero(a, n)<<endl;
	}
}
/*
	3
	6
	1 1 1 1 1 1
	5
	0 0 0 0 0
	12 
	1 1 1 1 1 1 1 1 0 0 0 0 
*/
