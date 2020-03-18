using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,i,j;
		cin>>n;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>x;
				if(i==0 || j==0 || i==n-1 || j==n-1)
					cout<<x<<" ";
			}
		}
		cout<<endl;
	}
}
