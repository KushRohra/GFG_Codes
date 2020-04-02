#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
	int f=1;
	if(n<2)
		return 1;
	for(int i=2;i<=n;i++)
	{
		f*=i;
	}
	return f;
}
int strong(int n, vector<int> v)
{
	int sum=0;
	while(n!=0)
	{
		sum+=v[n%10];
		n/=10;
	}
	return sum;
}
int main()
{
	int t;
	cin>>t;
	vector<int> v(10,0);
	for(int i=0;i<10;i++)
		v[i]=fact(i);
	while(t--)
	{
		int n;		
		cin>>n;
		if(strong(n,v)==n)
			cout<<"Strong"<<endl;
		else cout<<"Not Strong"<<endl;
	}
}
