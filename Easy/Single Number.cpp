#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,y=0,i,x;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>x;
			y=y^x;
		}
		cout<<y<<endl;
	}
}
/*
	2
	5
	1 1 2 2 2
	7
	8 8 7 7 6 6 1
*/
