using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s[2];
		cin>>s;
		if(s[0]=='R')
		{
			if(s[1]=='S')
			{
				cout<<"A"<<endl;
			}
			else if(s[1]=='R')
			{
				cout<<"DRAW"<<endl;
			}
			else cout<<"B"<<endl;
		}
		else if(s[0]=='P')
		{
			if(s[1]=='R')
			{
				cout<<"A"<<endl;
			}
			else if(s[1]=='P')
			{
				cout<<"DRAW"<<endl;
			}
			else cout<<"B"<<endl;
		}
		else if(s[0]=='S')
		{
			if(s[1]=='P')
			{
				cout<<"A"<<endl;
			}
			else if(s[1]=='S')
			{
				cout<<"DRAW"<<endl;
			}
			else cout<<"B"<<endl;
		}
	}
