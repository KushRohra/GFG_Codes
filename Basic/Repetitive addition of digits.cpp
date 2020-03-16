#include<bits/stdc++.h>
using namespace std;
int single(int n)
{
	int c,sum=0;
	while(n!=0)
	{
		sum=sum+(n%10);
		n/=10;
	}
	if(sum/10==0)
		return sum;
	else return single(sum);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<single(n)<<endl;
	}
}
