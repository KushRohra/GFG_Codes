using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int c,i,a=0,b=1,n;
		cin>>n;
		c=a+b;
		cout<<a<<" "<<b<<" ";
		while(c<n)
		{
			c=a+b;
			if(c<=n)
				cout<<c<<" ";
			a=b;
			b=c;
		}
		cout<<endl;
	}
