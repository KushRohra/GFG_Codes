using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n][n],i,j,f=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
			if(f==0)
			{
				for(j=0;j<n;j++)
					cout<<a[i][j]<<" ";	
				f=1;
			}
			else
			{
				for(j=n-1;j>=0;j--)
					cout<<a[i][j]<<" ";		
				f=0;
			}	
		}
		cout<<endl;
	}
