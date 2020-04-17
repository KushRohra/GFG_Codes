#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,x,n,s1=0,s2=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>x;
			if(i<n/2)
				s1+=x;
			else s2+=x;
		}
		cout<<s1*s2<<endl;
	}
	//2 4 1 2 3 4 3 4 5 6
}
