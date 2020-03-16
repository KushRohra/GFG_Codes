using namespace std;
#include<stack>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int i,a[n],x,b[n];
		stack<long long int> s;
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=n-1;i>=0;i--)
		{
			x=a[i];
			if(s.empty())
			{
				s.push(x);
				b[i]=-1;
			}
			else
			{
				if(x<s.top())
				{
					b[i]=s.top();
					s.push(x);
				}
				else
				{
					int f=0;
					while(f==0 && !s.empty())
					{
						if(s.top()<x)
							s.pop();
						else
							f=1;
					}
					if(f==0)
					{
						b[i]=-1;
					}
					else
					{
						b[i]=s.top();
					}
					s.push(x);
				}
			}
		}
		for(i=0;i<n;i++)
			cout<<b[i]<<" ";
		cout<<endl;
	}
