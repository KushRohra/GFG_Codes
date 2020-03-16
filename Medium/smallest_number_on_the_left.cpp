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
		int a[n],i,x;
		stack<int> s;
		for(i=0;i<n;i++)
		{
			cin>>x;
			if(s.empty())
			{
				s.push(x);
				cout<<"-1 ";
			}
			else
			{
				if(x>s.top())
				{
					cout<<s.top()<<" ";
					s.push(x);
				}
				else
				{
					int f=0;
					while(f==0 && !s.empty())
					{
						if(x<=s.top())
							s.pop();
						else
							f=1;
					}
					if(f==0)
					{
						cout<<"-1 ";
					}
					else
					{
						cout<<s.top()<<" ";
					}
					s.push(x);
				}
			}
		}
		cout<<endl;
	}
