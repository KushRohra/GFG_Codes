#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,y=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			y = y xor x;
		}	
		cout<<y<<endl;
	}
}
