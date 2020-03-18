#include<list>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n,e;
		cin>>n>>e;
		list<int> adj[n],temp;
		int a,b;
		for(i=0;i<e;i++)
		{
			cin>>a>>b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		for(i=0;i<n;i++)
		{
			temp=adj[i];
			cout<<i;
			while(!temp.empty())
			{
				cout<<"-> "<<temp.front();
				temp.pop_front();
			}
			cout<<endl;
		}
	}
}
