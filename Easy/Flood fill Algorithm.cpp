#include<queue>
using namespace std;
struct node
{
	int x,y;
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n][m],i,j,b[n][m];
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)	
			{
				cin>>a[i][j];
				b[i][j]=0;
			}	
	/*	for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)	
				cout<<a[i][j]<<" ";
			cout<<endl;
		}*/
		int x1,y1,key;
		cin>>x1>>y1>>key;
		int change=a[x1][y1];
		a[x1][y1]=key;
		queue<node> q;
		node temp,t,t1;
		temp.x=x1;
		temp.y=y1;
		q.push(temp);
		while(!q.empty())
		{
			int x2,y2;
			t=q.front();
			x2=t.x;
			y2=t.y;
			q.pop();
			if(x2+1<n)
			{
				if(a[x2+1][y2]==change && b[x2+1][y2]==0)
				{
					b[x2+1][y2]=1;
					a[x2+1][y2]=key;
					t1.x=x2+1;
					t1.y=y2;
					q.push(t1);
				}
			}
			if(x2-1>=0)
			{
				if(a[x2-1][y2]==change && b[x2-1][y2]==0)
				{
					b[x2-1][y2]=1;
					a[x2-1][y2]=key;
					t1.x=x2-1;
					t1.y=y2;
					q.push(t1);
				}
			}
			if(y2+1<m)
			{
				if(a[x2][y2+1]==change && b[x2][y2+1]==0)
				{
					b[x2][y2+1]=1;
					a[x2][y2+1]=key;
					t1.x=x2;
					t1.y=y2+1;
					q.push(t1);
				}
			}
			if(y2-1>=0)
			{
				if(a[x2][y2-1]==change && b[x2][y2-1]==0)
				{
					b[x2][y2-1]=1;
					a[x2][y2-1]=key;
					t1.x=x2;
					t1.y=y2-1;
					q.push(t1);
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cout<<a[i][j]<<" ";
			}
		}
		cout<<endl;
	}
}
