#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int c=0,i,n,x,max=INT_MIN;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>x;
			if(x>max)
			{
				max=x;
				c++;
			}
		}
		cout<<c<<endl;
	}
}

/*
	2
	5
	7 4 8 2 9
	4
	2 3 4 5
*/
