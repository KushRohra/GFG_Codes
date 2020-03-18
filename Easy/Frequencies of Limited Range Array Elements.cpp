using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,x;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
			a[i]=0;
		for(i=0;i<n;i++)
		{
			cin>>x;
			a[x-1]++;
		}
		for(i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}
