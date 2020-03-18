using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int i,a[n],max=-1;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
			max=a[i];
	}
	long long int c[max+1];
	c[0]=2;
	c[1]=1;
	for(i=2;i<max+1;i++)
		c[i]=(c[i-1]+c[i-2])%1000000007;
	for(i=0;i<n;i++)
		cout<<c[a[i]]<<endl;
}
