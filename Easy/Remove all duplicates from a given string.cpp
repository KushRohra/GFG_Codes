#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str,s1="";
		cin>>str;
		set<int> s;
		for(int i=0;i<str.length();i++)
		{
			if(s.find(str[i])==s.end())
			{
				s.insert(str[i]);
				s1+=str[i];
			}
		}
		cout<<s1<<endl;
	}
}
/*
	2
	geeksforgeeks
	HappyNewYear
*/
