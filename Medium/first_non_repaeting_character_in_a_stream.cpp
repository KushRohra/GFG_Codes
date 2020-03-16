#include<queue>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,p,s,s1,j;
		int a[26];
		char x,z;
		for(i=0;i<26;i++)
			a[i]=0;
		p=int('a');
		queue<int> q;
		cin>>n;
		while(n--)
		{
			cin>>x;
			if(q.empty())
			{
				s=int(x)-p;
				a[s]++;
				q.push(s);
				x=char(s+p);
				cout<<x<<" ";
			}
			else
			{
				s=int(x)-p;
				a[s]++;
				q.push(s);
				int f=0;
				queue<int> q1=q;
				while(f==0)
				{
					f=-1;
					while(!q1.empty() && f!=1)
					{
						s=q1.front();
						if(a[s]==1)
						{
							f=1;
							s1=s;
						}
							q1.pop();
					}
					if(f==-1)
					{
						f=1;
						s1=-1;
					}	
				}
				if(s1==-1)
					cout<<"-1 ";
				else
				{
					x=char(s1+p);
					cout<<x<<" ";
				}
			}
		}
		cout<<endl;
	}
