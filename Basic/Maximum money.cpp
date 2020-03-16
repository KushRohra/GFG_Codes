#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,money;
		cin>>n>>money;
		if(n%2==0)
			cout<<money*(n/2)<<endl;
		else cout<<money*((n+1)/2)<<endl;
	}
}
