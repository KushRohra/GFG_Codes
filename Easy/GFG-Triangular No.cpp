#include<bits/stdc++.h>
using namespace std;
bool triangle(int s)
{
	int p,q,n=s;
	s=8*s;
	s++;
	s=sqrt(s);
	s--;
	q=s/2;
	if(q%2==0)
	{
		p=q/2;
		p=p*(q+1);
	}
	else 
	{
		p=(q+1)/2;
		p=p*q;
	}
	if(p==n)
		return 1;
	return 0;
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<triangle(n)<<endl;
	}
}
