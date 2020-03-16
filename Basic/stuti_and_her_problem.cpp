using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,i=0,s=0,j;
		cin>>n;
		while(s<n)
		{
			s=(i*(i+1))/2;
			i++;
			if(s==n)	
				j=i-1;
			else
				j=-1;
		}
		cout<<j<<endl;
	}
