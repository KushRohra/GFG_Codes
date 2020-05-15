#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,x,d,n,max=INT_MIN;
		cin>>n;
		unordered_map<int, int> m;		
		for(i=0;i<n;i++)
		{
			cin>>x;
			unordered_map<int, int>::iterator it=m.find(x);
			if(it!=m.end())
			{
				d=i-it->second;
				if(d>max)
					max=d;
			}			
			else m[x]=i;
		}
		cout<<max<<endl;
	}
}
