using namespace std;
void print_sequence(long long int a[],long long int n)
{
	a[0]=a[1]=a[2]=1;
	for(int i=3;i<=n;i++)
	{
		a[i]=a[i-2]+a[i-3];
		a[i]=a[i]%1000000007;	
	}
}
int main()
{
	long long int n;
	cin>>n;
	
		long long int a[n],max=-1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>max)
				max=a[i];
		}
		long long int c[max+1];
		print_sequence(c,max+1);	
		for(int i=0;i<n;i++)
		{
			cout<<c[a[i]]<<endl;
		}	

