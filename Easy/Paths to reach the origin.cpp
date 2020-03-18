using namespace std;
#define max 30
int a[max][max];
void paths(int n,int m,int *c,int x1,int y1,int x2,int y2)
{
	if(x1<0)
		return;
	if(y1<0)
		return;
	if(x1==x2 && y1==y2)
	{
		(*c)++;
	}	
	paths(n,m,c,x1-1,y1,x2,y2);
	paths(n,m,c,x1,y1-1,x2,y2);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>n>>m;
		int c=0;
		paths(n,m,&c,n,m,0,0);
		cout<<c<<endl;
	}
}
