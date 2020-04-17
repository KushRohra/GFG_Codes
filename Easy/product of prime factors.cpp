#include<bits/stdc++.h>
using namespace std;
int prime(int x, vector<bool> v)
{
	int f=1;
	for(int i=1;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			if(i!=(x/i))
			{
				if(v[i]==1)
					f*=i;
				if(v[x/i]==1)
					f*=(x/i);		
			}
			else
			{
				if(v[i]==1)
					f*=i;
			}	
		}
	}
	return f;
}
int main()
{
	int n;
	cin>>n;
	int i, a[n], max=INT_MIN;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
			max=a[i];
	}
	vector<bool> v(max+1, 1);
	v[0]=0;
	v[1]=0;
	for(i=2;i<max+1;i++)
	{
		for(int j=i, k=2;j*k<max+1;k++)
			v[j*k]=0;
	}
	for(i=0;i<n;i++)
	{
		cout<<prime(a[i], v)<<endl;
	}
}

/*
	2
	10
	25
*/
