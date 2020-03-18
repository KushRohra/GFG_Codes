using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,max=-1;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>max)
				max=a[i];
		}
		int c[max+1],f=0,j=99999999,flag=0;
		for(i=0;i<=max;i++)
			c[i]=0;
		for(i=n-1;i>=0;i--)
		{
			if(c[a[i]]==0)
				c[a[i]]++;
			else
			{
				f=i+1;
				flag=1;
				if(f<j)
					j=f;
			}
		}
		if(flag==0)
		    cout<<"-1"<<endl;
		else cout<<j<<endl;		
	}
}
