#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		 int s,i,n;
		 int a[12];
		 cin>>s;
		 n=s;
		 for(i=0;i<12;i++)
		 	a[i]=0;
		 int f=0;
		 i=0;
		 while(f==0 && s>0)
		 {
		 	if(s>=9)
		 	{
		 		s=s-9;
		 		a[i]+=9;
		 		i++;
		 	}
		 	else
		 	{
		 		a[i]+=s;
		 		s=0;
		 		f=1;
		 	}
		 }
		i=0;
		long long int sum=a[i];
		i=i+1;
		while(a[i]!=0)
		{
			sum=sum+a[i]*pow(10,i);
			i++;
		}		
		cout<<sum;
		for(i=0;i<n;i++)
			cout<<"0";
		cout<<endl;
	}
}
