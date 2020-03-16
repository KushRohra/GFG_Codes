using namespace std;
#include<queue>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int r,c,i,j,c1=0,time=0,d;
		cin>>r>>c;
		int a[r][c];
		queue<int> qi,qj;
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cin>>a[i][j];
				if(a[i][j]==1)
					c1++;
				else if(a[i][j]==2)
				{
					qi.push(i);
					qj.push(j);
				}		
			}
		}
		qi.push(-1);
		qj.push(-1);
		int f=0;
		//cout<<"ini c1="<<c1<<endl;
		while(c1!=0 && f==0)
		{
			d=0;
			while(qi.front()!=-1)
			{
				i=qi.front();
				j=qj.front();
				//cout<<"i="<<i+1<<" j="<<j+1<<endl;
				qi.pop();
				qj.pop();
				if(a[i-1][j]==1 && i!=0)
				{
					d++;
					a[i-1][j]=2;
					qi.push(i-1);
					qj.push(j);
				//	cout<<"1"<<endl;
				}
				if(a[i+1][j]==1 && i!=r-1)
				{
					d++;
					a[i+1][j]=2;
					qi.push(i+1);
					qj.push(j);
				//	cout<<"2"<<endl;
				}
				if(a[i][j-1]==1 && j!=0)
				{
					d++;
					a[i][j-1]=2;
					qi.push(i);
					qj.push(j-1);
					//cout<<"3"<<endl;
				}
				if(a[i][j+1]==1 && j!=c-1)
				{
					d++;
					a[i][j+1]=2;
					qi.push(i);
					qj.push(j+1);
					//cout<<"4"<<endl;
				}
			}
			c1=c1-d;
			time++;
			if(qi.front()==-1)
			{
				qi.pop();
				qj.pop();
			}
			if(!qi.empty())
			{
				qi.push(-1);
				qj.push(-1);
			}
			if(qi.empty())
				f=1;	
		//	cout<<"c1="<<c1<<endl;
		}
		//cout<<a[2][0]<<endl;
		//cout<<"final c1="<<c1<<endl;
		if(c1!=0)
			cout<<"-1"<<endl;
		else cout<<time<<endl;
	}				
}
