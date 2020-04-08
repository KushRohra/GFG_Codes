#include<bits/stdc++.h>
using namespace std;
int find(vector<int> v, int n)
{
	int s=0, e=v.size()-1, mid;
	while(s<=e)
	{
		mid=s+(e-s)/2;
		if(v[mid]==n)
			return mid+1;
		else if(v[mid]<n)
			s=mid+1;
		else e=mid-1;
	}
	return e+1;
}
int main()
{
	int n;
	cin>>n;
	int a[n], i, max=INT_MIN;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
			max=a[i];
	}
	vector<int> v;
	int sum=0;
	i=1;
	while(sum<max)
	{
		sum+=i;
		i++;
		if(sum<=max)
			v.push_back(sum);
	}
	int x;
	for(i=0;i<n;i++)
	{
		x=find(v, a[i]);
		cout<<x<<endl;
	}
} 
