using namespace std;
#include<string.h>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,c=1;
		char s[10000];
		cin>>s;
		n=strlen(s);
		for(i=0;i<n;i++)
		{
			if(i==0)
				cout<<s[i];
			else
			{
				if(s[i]==s[i-1])
				{
					c++;
					if(c<3)
						cout<<s[i];
				}
				else
				{
					c=1;
					cout<<s[i];
				}
			}
		}
		cout<<endl;
	}
}
