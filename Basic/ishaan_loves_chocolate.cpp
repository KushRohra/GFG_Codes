using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,min=99999999;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>x;
			if(x<min)
				min=x;
		}
		cout<<min<<endl;
	}
