#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i,x;
		cin>>n>>k;
		multiset<int> s;
		for(i=0;i<n;i++)
		{
			cin>>x;
			s.insert(x);
		}
		int sum=0;
		multiset<int>::iterator it;
		while(k--)
		{
			it=s.end();
			it--;
			sum+=*it;
			s.insert(*it/2);
			it=s.end();
			it--;
			s.erase(it);
		}
		cout<<sum<<endl;
	}
}
