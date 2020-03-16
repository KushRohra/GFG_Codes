#include<bits/stdc++.h>
using namespace std;
int not_gate(int n)
{
	int i=0,sum=0;
	while(n!=0)
	{
		sum=sum+(1-(n%2))*pow(2,i);
		i++;
		n/=2;
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
		cout<<not_gate(n)<<endl;
	}
}
