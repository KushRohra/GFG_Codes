#include<string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s[1000000];
		int l,i;
		cin>>s;
		l=strlen(s);
		int a[26],s1,p;
		p=int('a');
		for(i=0;i<26;i++)
			a[i]=0;
		for(i=0;i<l;i++)
		{
			s1=int(s[i])-p;
			a[s1]++;
		}
		for(i=26;i>=0;i--)
		{
			while(a[i]!=0)
			{
				cout<<char(i+p);
				a[i]--;
			}
		}
		cout<<endl;
	}
