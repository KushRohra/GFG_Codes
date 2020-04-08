#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i;
		cin>>n>>k;
		int penalty[n],car[n];
		for(i=0;i<n;i++)
			cin>>car[i];
		for(i=0;i<n;i++)
			cin>>penalty[i];
		int f=0,sum=0;
		if(k%2==1)
			f=1;
		for(i=0;i<n;i++)
		{
			if(k && car[i]%2)
				sum+=penalty[i];
		}
		cout<<sum<<endl;
	}
}
/*
	2
	4 12
	2375 7682 2325 2352
	250 500 350 200
	3 8
	2222 2223 2224
	200 300 400
*/
