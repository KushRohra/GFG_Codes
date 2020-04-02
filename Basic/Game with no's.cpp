#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n-1;i++)
			b[i]=a[i] xor a[i+1];
		b[n-1]=a[n-1];
		for(int i=0;i<n;i++)
			cout<<b[i]<<" ";
		cout<<endl;
	}
}
