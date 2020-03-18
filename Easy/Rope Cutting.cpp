using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,j,i,x,k;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			for(j=0;j<i;j++)
			{
				if(a[j]>a[i])
				{
					k=a[i];
					a[i]=a[j];
					a[j]=k;
				}
			}
		}
		while(a[n-1]!=0)
		{
			j=0;
			int f=0;
			while(f==0)
			{
				if(a[j]>0)
					f=1;
				else j++;
			}
			f=a[j];
			for(i=0;i<n;i++)
			{
				a[i]=a[i]-f;
			}
			j=0;
			for(i=0;i<n;i++)
			{
				if(a[i]>0)
				{
					f=i;
					j=1;
				}
				if(j==1)
					break;
			}
			if(a[n-1]!=0)
				cout<<n-f<<" ";
		}
		cout<<endl;
	}
}
