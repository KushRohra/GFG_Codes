#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i=0,f=0;
		cin>>n;
		while(n!=0)
		{
			//cout<<n%2<<endl;
			i++;
			if(n%2==1)
			{
				f=1;
				break;
			}
			n/=2;
		}
		cout<<endl;
		if(f==0)
			cout<<f;
		else cout<<i;
		cout<<endl;
	}
}
