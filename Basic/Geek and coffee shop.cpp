#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		k--;
		while(k--)
			n/=2;
		cout<<n<<endl;
	}
}
