using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int a[n],i,max=-1;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
			max=a[i];
	}
	long long int c[max+1];
	c[0]=1;
	c[1]=2;
	for(i=2;i<max+1;i++)
	{
		c[i]=c[i-1]+c[i-2];
	}
	for(i=0;i<n;i++)	
		cout<<c[a[i]-1]<<endl;
}
