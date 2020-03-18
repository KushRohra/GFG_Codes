using namespace std;
#include<queue>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int a[n];
		queue<int> q,q1;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<0)
				q.push(i);
		}
		int k;
		cin>>k;
		for(i=0;i<=n-k+1;i++)
		{
		    if(i+k<=n){
			if(!q.empty())
			{
				if(q.front()>=i && q.front()<i+k)
					cout<<a[q.front()]<<" ";
				else
				{
					if(q.front()<i)
					{
						
						while(!q.empty() && q.front()<i)
							q.pop();
						if(!q.empty())
						{
							if(q.front()>=i && q.front()<i+k)
								cout<<a[q.front()]<<" ";
							else cout<<"0 ";	
						}
						else cout<<"0 ";
					}
					else cout<<"0 ";
				}
			}
			else cout<<"0 ";}
		}
		cout<<endl;
	}
}
