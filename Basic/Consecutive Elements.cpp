#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, i;
		string str;
		queue<char> s;
		cin>>str;
		n=str.length();
		s.push(str[0]);
		for(i=1;i<n;i++)
		{
			if(str[i]!=s.back())
				s.push(str[i]);
		}
		str="";
		while(s.empty()==false)
		{
			str+=s.front();
			s.pop();
		}
		cout<<str<<endl;
	}
}
// 1 aababbccd
