using namespace std;
#include<string.h>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s[100000];
		cin>>s;
		int x,l,i,c=1;
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			x=int(s[i]);
			if(x>64 && x<91)
				c++;
		}
		cout<<c<<endl;
	}
