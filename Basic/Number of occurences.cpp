#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n], i;
		for(i=0;i<n;i++)
			cin>>a[i];
		if(a[0]==k && a[n-1]==k)
			cout<<n<<endl;
		else
		{
			int s=0, e=n-1, mid, f=0;
			while(s<=e)
			{
				mid=s+(e-s)/2;
				if(a[mid]>=k)
					e=mid-1,f=1;
				else
					s=mid+1;
			}
			int s1=0, e1=n-1, mid1;
			while(s1<=e1)
			{
				mid1=s1+(e1-s1)/2;
				if(a[mid1]<=k)
					s1=mid1+1;
				else
					e1=mid1-1;
			}
			if(f==1 && e1!=s)
				cout<<e1-s+1<<endl;
			else if(f==1 && e1==s)
				cout<<"1"<<endl;
			else cout<<"-1"<<endl;	
		}
	}
}
/*
	6
	7 2
	1 2 2 3 3 4 5
	7 2
	1 1 2 2 2 2 3
	7 4
	1 1 2 2 2 2 3
	7 3
	1 1 2 2 2 2 3
	7 1
	1 2 2 2 2 2 3
	7 2
	2 2 2 2 2 2 2
*/
