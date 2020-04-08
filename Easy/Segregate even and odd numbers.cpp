#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, x, i;
		cin>>n;
		vector<int> even, odd;
		for(i=0;i<n;i++)
		{
			cin>>x;
			if(x%2==0)
				even.push_back(x);
			else odd.push_back(x);
		}
		//sort(even.begin(), even.end());
		//sort(odd.begin(), odd.end());
		for(i=0;i<even.size();i++)
			cout<<even[i]<<" ";
		for(i=0;i<odd.size();i++)
			cout<<odd[i]<<" ";
		cout<<endl;
	}
}
/*
	2
	7
	12 34 45 9 8 30 3
	5
	0 1 2 3 4
*/
