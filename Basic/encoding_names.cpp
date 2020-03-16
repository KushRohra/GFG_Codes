#include<iostream>
#include<string.h>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s[1000000];
		cin>>s;
		int i,l;
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			cout<<int(s[i])-10+i;
		}
		cout<<endl;
	}
