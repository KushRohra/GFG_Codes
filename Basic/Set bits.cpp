#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, c=0, i;
		cin>>n;
		while(n)
		{
			c++;
			n=n&(n-1);
		}
		cout<<c<<endl;
	}
}
