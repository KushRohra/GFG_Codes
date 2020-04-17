#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c=0;
		cin>>n;
		while(n)
		{
			n=n&(n-1);
			c++;
		}
		c==1?cout<<"YES":cout<<"NO";
		cout<<endl;
	}
}

/*  
	2 
	1
	98
*/
