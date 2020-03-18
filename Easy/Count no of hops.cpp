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
	long long int c[max];
	c[0]=1;
	c[1]=2;
	c[2]=4;
	for(i=3;i<max;i++)
		c[i]=c[i-3]+c[i-2]+c[i-1];
	for(i=0;i<n;i++)
	{
		cout<<c[a[i]-1]<<endl;
	}
}
