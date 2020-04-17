#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		string s;
		cin>>n;
		unordered_map<string ,int> m;
		for(i=0;i<n;i++)
		{
			cin>>s;
			m[s]++;
		}
		multiset<int> s1;
		unordered_map<string, int>::iterator it;
		for(it=m.begin();it!=m.end();it++)
			s1.insert(it->second);
		multiset<int>::iterator it1;
		for(it1=s1.begin();it1!=s1.end();it1++)
			cout<<*it1<<endl;
	}
}
