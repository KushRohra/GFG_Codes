#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n,k,x;
		unordered_map<int, int> m;
		cin>>n>>k;
		for(i=0;i<n;i++)
		{
			cin>>x;
			m[x]++;
		}
		unordered_map<int, int>::iterator it=m.begin();
		for(;it!=m.end();it++)
		{
			if(it->second!=k)
			{
				cout<<it->first<<endl;
				break;
			}
		}
	}
}
