#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i;
		string s1,s2;
		cin>>s1>>s2;
		set<char> s;
		set<char> s11;
		for(i=0;i<s2.length();i++)
			s11.insert(s2[i]);
		for(i=0;i<s1.length();i++)
			s.insert(s1[i]);
		set<char>::iterator it=s11.begin();
		for(;it!=s11.end();it++)
			if(s.find(*it)==s.end())
				s.insert(*it);
			else s.erase(*it);
		it=s.begin();
		for(;it!=s.end();it++)
			cout<<*it;
		cout<<endl;
	}
}
/*
1 characters alphabets
*/
