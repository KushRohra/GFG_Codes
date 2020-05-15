#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		string s;
		cin>>s;
		n=s.length();
		int a[26]={0};
		for(i=0;i<n;i++)
			a[int(s[i])-97]++;
		int max=INT_MIN, index=-1;
		for(i=0;i<26;i++)
			if(a[i]>max)
				max=a[i], index=i;
		cout<<char(index+97)<<endl;
	}
}
