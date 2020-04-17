#include<bits/stdc++.h>
using namespace std;
int nCtwo(int n)
{
	int sum=0;
	if(n%2==0)
	{
		sum=n/2;
		sum*=(n-1);
	}
	else
	{
		sum=(n-1)/2;
		sum*=n;
	}
	return sum;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int sum=s.length();
		unordered_map<char, int> m;
		for(int i=0;i<s.length();i++)
			m[s[i]]++;
		unordered_map<char, int>::iterator it;
		for(it=m.begin();it!=m.end();it++)
		{
			int c=c+nCtwo(it->second);
			sum+=c;	
		}
		cout<<sum<<endl;
	}
}
