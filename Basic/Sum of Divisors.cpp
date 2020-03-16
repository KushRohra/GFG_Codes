#include<bits/stdc++.h>
using namespace std;
int sumofdivisors(int n)
{
	int i,sum=0;
	for(i=1;i<=sqrt(n);i++)
		if(n%i==0)
		{
			if(n/i==i)
				sum+=i;
			else
			{
				sum+=i;
				sum=sum+(n/i);
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
		cout<<sumofdivisors(n)-n<<endl;
	}
}
