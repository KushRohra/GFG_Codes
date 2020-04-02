#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],i,max=INT_MIN;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
			max=a[i];
	}
	long long int f=0;
	i=1;
	set<int> s;
	while(f<max)
	{
		f=pow(2,i);
		s.insert(f);
		i++;
	}
	set<int>::iterator it;/*
	for(it=s.begin();it!=s.end();it++)
		cout<<*it<<" ";
	cout<<endl;*/
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
			cout<<"1"<<endl;
		else if(a[i]<3)
			cout<<"0"<<endl;
		else
		{
			int x=a[i]-1;
			if(s.find(x)!=s.end())
				cout<<"1"<<endl;
			else cout<<"0"<<endl;
		}
	}
}
// 3 2 1 1 3 1 0 1 4 1 1 1 0
