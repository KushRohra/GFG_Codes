#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,m,c=0;
		cin>>a>>b>>m;
		for(int i=a;i<b+1;i++)
		{
			if(i%m==0)
				c++;		
		}		
		cout<<c<<endl;
	}
}
