#include<stack>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,x,y;
		stack<int> s;
		cin>>n;
		int a[n],b[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=n-1;i>=0;i--)
		{
			x=a[i];
			y=0;
			int f=0;
			if(s.empty())
			{
				s.push(x);
				b[i]=-1;
			}
			else
			{
				y=s.top();
				if(x>y)
				{
					b[i]=y;
					s.push(a[i]);
				}
				else
				{
					b[i]=-1;
					s.push(a[i]);
				}
			}
		}
		for(i=0;i<n;i++)
			cout<<b[i]<<" ";
		cout<<endl;
	}
