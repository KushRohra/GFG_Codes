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
		int x, i;
		vector<int> a;
		for(i=0;i<n;i++)
			cin>>x, a.push_back(x);
		sort(a.begin(), a.end());
		for(i=0;i<n-1;i=i+2)
		{
			x=a[i];
			a[i]=a[i+1];
			a[i+1]=x;
		}
		for(i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}
/*
	2
	5
	1 2 3 4 5
	6
	2 3 6 4 1 5
*/
