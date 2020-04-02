#include<bits/stdc++.h>
using namespace std;
int evensum(int n)
{
	int sum=0;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			if(n/i==i)
			{
				if(i%2==0)
					sum+=i;
			}
			else
			{
				if(i%2==0)
					sum+=i;
				if((n/i)%2==0)
					sum+=(n/i);
			}
		}
	}
	return sum;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;		
		cin>>n;
		cout<<evensum(n)<<endl;
	}
}
