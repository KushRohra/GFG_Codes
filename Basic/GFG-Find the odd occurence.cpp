#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,x=0,y,n;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>y;
			x=x xor y;
		}
		cout<<x<<endl;
	}
}
