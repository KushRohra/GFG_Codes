#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x=0, y=0, n=0, i=0;
		cin>>n;
		while(n!=0)
		{
			y=n%2;
			//cout<<y<<" "<<i<<endl;
			n/=2;
			if(i%2==0 && y==1)
				y=0;
			x=x+y*pow(2,i);
			i++;
		}
		cout<<x<<endl;
	}
}
//2 30 10
