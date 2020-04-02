#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n;
		int a[n],i;
		unordered_map<int, int> m;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			m[a[i]]++;
		}
		int f=0;
		for(i=0;i<n;i++)
		{
			if(m[a[i]]==k)
				f=1;
			if(f==1)
				break;
		}
		if(f==0)
			cout<<a[i]<<endl;
		else cout<<"-1"<<endl;		
	}
}
// 1 7
