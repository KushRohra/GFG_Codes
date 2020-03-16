#include<stack>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n],j;
		for(i=0;i<n;i++)
			cin>>a[i];
		i=0;
		j=1;
		stack<int> s;
		for(;j<n;j++,i++)
		{
			int f=0;
			if(a[i]>a[j])
				s.push(a[i]);
			else
			{
				while(!s.empty())
				{
					if(a[j]>s.top())
					{
						s.pop();
						f=1;
					}
					else break;
				}
			}
			if(f==1)
				cout<<a[i]<<" ";
		}
		cout<<a[n-1]<<endl;
	}
