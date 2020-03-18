using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,money;
		cin>>n>>money;
		int a[n],j,i,min;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			for(j=0;j<i;j++)
			{
				if(a[i]<a[j])
				{
					min=a[i];
					a[i]=a[j];
					a[j]=min;
				}
			}
		}
		i=0;
		int c=0;
		while(money>=a[i])
		{
			money-=a[i];
			c++;
			i++;
		}
		cout<<c<<endl;
	}
}
