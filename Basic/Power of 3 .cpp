#include<bits/stdc++.h>
using namespace std;
bool find(vector<int> v, int x)
{
	int s=0, e=v.size()-1, mid;
	while(s<=e)
	{
		mid=s+(e-s)/2;
		if(v[mid]==x)
			return 1;
		else if(v[mid]<x)
			s=mid+1;
		else e=mid-1;
	}
	return 0;
}
int main()
{
    long long int n;
    cin>>n;
    long long int i, max=INT_MIN, a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }
    vector<int> v;
    long long int s=1;
    i=1;
    v.push_back(s);
    while(s<=max)
    {
    	s=pow(3,i);
    	i++;
    	v.push_back(s);
	}
	for(i=0;i<n;i++)
	{
		if(find(v, a[i]))
			cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}

/*
	2
	3
	6
*/
