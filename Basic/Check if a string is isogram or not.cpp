#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int i,x;
		vector<int> v(26,0);
		int f=0;
		for(i=0;i<s.length();i++)
		{
			x=int(s[i])-97;
			if(v[x]==0)
				v[x]=1;
			else 
			{
				f=1;
				break;
			}
		}
		cout<<1-f<<endl;
	}
}
