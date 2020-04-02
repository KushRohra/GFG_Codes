#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,y=0,i;
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
	1 1 2 5 5
	7 
	2 2 5 5 20 30 30
*/
