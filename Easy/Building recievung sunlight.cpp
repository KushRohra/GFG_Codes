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
	3
	6
	6 2 8 4 11 13
	5
	2 5 1 8 3
	7
	3 4 1 0 6 2 3
*/
