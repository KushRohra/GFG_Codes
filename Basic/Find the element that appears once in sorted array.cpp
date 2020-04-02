#include<bits/stdc++.h>
using namespace std;
long long int findoddoneout(long long int a[], long long int n)
{
	long long int s=0,e=n-1,mid;
	while(s<=e)
	{
		mid=s+(e-s)/2;
		if(s==e)
			return s;
		if(mid%2==0)
		{
			if(a[mid]==a[mid+1])
				s=mid+2;
			else e=mid;
		}
		else
		{
			if(a[mid]==a[mid-1])
				s=mid+1;
			else e=mid-1;
		}
	}
}
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int a[n],i;
		for(i=0;i<n;i++)
			cin>>a[i];
		cout<<a[findoddoneout(a,n)]<<endl;
	}
}
// 4 11 1 1 2 2 3 3 4 50 50 65 65 7 1 1 2 3 3 4 4 9 1 2 2 3 3 4 4 5 5 7 1 1 2 2 3 3 4
