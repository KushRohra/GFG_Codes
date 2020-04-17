#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,str,text;	
		cin>>str>>text;	
		int c=0,i,n1,n2;
		n1=str.length();
		n2=text.length();
		sort(text.begin(), text.end());
		for(i=0;i<n1-n2+1;i++)
		{
			s=str.substr(i,n2);
			sort(s.begin(), s.end());
			if(s==text)
				c++;
		}
		cout<<c<<endl;
	}
}
/*
	2
	forxxorfxdofr
	for
	aabaabaa
	aaba
*/
