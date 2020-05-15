#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,x,n,min=INT_MAX,max=INT_MIN;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>x;
			if(x<min)
				min=x;
			if(x>max) 
				max=x;
		}
		cout<<min<<" "<<max<<endl;
	}
	//2 6 3 2 1 56 100000 167 5 1 345 234 21 56789
}
