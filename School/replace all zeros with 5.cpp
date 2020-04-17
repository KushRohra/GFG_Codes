#include<bits/stdc++.h>
using namespace std;
int convertFive(int n)
{
	stack<int> s;
	int x;
	while(n)
	{
		x=n%10;
		n/=10;
		if(x==0)
			x=5;
		s.push(x);
	}
	x=0;
	while(!s.empty())
	{
		x=s.top()+x*10;
		s.pop();
	}
	return x;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<convertFive(n)<<endl;
	}
}
