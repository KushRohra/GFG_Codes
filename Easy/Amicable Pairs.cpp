#include<bits/stdc++.h>
using namespace std;
int amicable(int n)
{
	int i,sum=0;
	for(i=1;i<sqrt(n);i++)
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
		int n1,n2,sum1=0,sum2=0;
		cin>>n1>>n2;
		sum1=amicable(n1)-n1;
		sum2=amicable(n2)-n2;
		if(sum1==n2 && sum2==n1)
			cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}
