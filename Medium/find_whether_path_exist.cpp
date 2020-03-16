using namespace std;
#define max 25
int a[max][max],b[max][max];
void find(int x,int y,int xf,int yf,int *f,int a[max][max], int n,int b[max][max])
{
	if(b[x][y]==1)
		return;
//	cout<<x<<" "<<y<<endl;
	if(x>n || x<0)
		return;
	if(y>n || y<0)
		return;
	if(a[x][y]==0)
		return;
	if(x==xf && y==yf)
		*f=1;
	if(x+1<n && *f==0)
	{
		b[x][y]=1;
		find(x+1,y,xf,yf,f,a,n,b);
	}
	if(x-1>=0 && *f==0)
	{
		b[x][y]=1;
		find(x-1,y,xf,yf,f,a,n,b);
	}
	if(y+1<n && *f==0)
	{
		b[x][y]=1;
		find(x,y+1,xf,yf,f,a,n,b);
	}
	if(y-1>=0 && *f==0)
	{
		b[x][y]=1;
		find(x,y-1,xf,yf,f,a,n,b);
	}	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,j,x1,x2,y1,y2;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>a[i][j];
				b[i][j]=0;
				if(a[i][j]==1)
				{
					x1=i;
					y1=j;
				}
				if(a[i][j]==2)
				{
					x2=i;
					y2=j;
				}
			}
		}
//		cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
		int f=0;
		find(x1,y1,x2,y2,&f,a,n,b);
		cout<<f<<endl;	
	}
