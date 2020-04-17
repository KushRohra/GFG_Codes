#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n=0,sum=0,sum1=0,f=0;
		string s;
		cin>>s;
		n=s.length();
		for(i=0;i<n;i++)
		{
			int x = int(s[i]);
			if(x>=48 && x<=57)
			{
				if(f==0)
				{
					sum1=0;
					sum1+=x-48;
					f=1;
				}
				else
				{
					sum1=sum1*10+x-48;
				}
			}
			else
			{
				sum+=sum1;
				f=0;
				sum1=0;
			}
		}
		sum+=sum1;
		cout<<sum<<endl;
	}
}
/*
4
1abc23
geeks4geeks
1abc2s30aw67
123abc
*/
