#include<bits/stdc++.h>
using namespace std;
int binarySubstring(int n, string a)
{
	int n1=0,c=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]=='1')
			n1++;
	}
	for(int i=0;i<n1;i++)
	{
		c+=(n1-i-1);
		cout<<n1-i-1<<" "<<c<<endl;
	}
	return c;
}
int main()
{
	int n,i;
	string s;
	cin>>s;
	n=s.length();
	cout<<binarySubstring(n,s)<<endl;
}
