using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int c=0,n;
		cin>>n;
		while(n!=0)
		{
			if(n%2==0)
			{
				n=n/2;
				c++;
			}
			else
			{
				n=n-1;
				c++;
			}
		}
		cout<<c<<endl;
	}
}
