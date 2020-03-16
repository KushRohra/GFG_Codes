#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,i,x;
		set<int> s;
		cin>>m>>n;
		for(i=0;i<m+n;i++)
		{
			cin>>x;
			s.insert(x);
		}
		cout<<s.size()<<endl;
	}
}
// 2 5 3 1 2 3 4 5 1 2 3 6 2 85 25 1 32 54 6 85 2
