using namespace std;
void fibbonacci(long long int a[],int n)
{
	a[0]=a[1]=1;
	for(int i=2;i<=n;i++)
		a[i]=a[i-1]+a[i-2];
}
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
	fibbonacci(c,max+1);
	for(i=0;i<n;i++)
	{
		int t=a[i];
		for(int j=0;j<a[i];j++)
			cout<<c[j]<<" ";
		cout<<endl;
	}
