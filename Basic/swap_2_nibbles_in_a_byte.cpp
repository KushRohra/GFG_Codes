#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int a[8];
		for(i=0;i<8;i++)
			a[i]=0;
		i=0;
		while(n!=0)
		{
			a[i]=n%2;
			n=n/2;
			i++;
		}
		int p;
		for(i=7;i>3;i--)
		{
			p=a[i-4];
			a[i-4]=a[i];
			a[i]=p;
		}
		for(i=7;i>=0;i--)
		{
			n=n+a[i]*pow(2,i);
		}
		cout<<n<<endl;
	}
