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
		vector<int> v(26,0);
		int x,n=s.length(),i;
		for(i=0;i<n;i++)
		{
			x=int(s[i])-97;
			v[x]++;
			if(v[x]==2)
			{
				x=-1;
				cout<<s[i]<<endl;
				break;
			}
		}
		if(x!=-1)
			cout<<"-1"<<endl;
	}
}
//2 geeksforgeeks hellogeeks
