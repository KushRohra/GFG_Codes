#include<iostream>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i=1,c=0;
		cin>>n;
		while(i*i<=n)
		{
			if(n%i==0)
			{
				if(n/i==i)
					c++;
				else c=c+2;
			}
			i++;
		}
		cout<<c<<endl;
	}
}
