using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i,j,c=0;
		cin>>n>>k;
		int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
		{
			if(a[i]==1)
			{
				a[i]=2;
				for(j=i;j<=i+k;j++)
				{
					if(j<n && a[j]!=1)
						a[j]=2;
				}
				for(j=i;j>=i-k;j--)
				{
					if(j>=0 && a[j]!=1)
						a[j]=2;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			if(a[i]==2)
				c++;
		}
		if(c==n)
			cout<<"1\n";
		else cout<<"0\n";
	}
}
