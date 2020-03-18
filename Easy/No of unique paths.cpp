using namespace std;
#define max 15
int a[max][max];
void paths(int a[max][max],int m,int n,int *c,int x1,int y1,int x2,int y2)
{
	//cout<<x1<<" "<<y1<<" "<<*c<<endl;
	if(x1>m)
		return;
	if(y1>n)
		return;
	if(x1==x2 && y1==y2)
	{
		//cout<<x1<<" "<<y1<<endl;
		(*c)++;
	}	
	paths(a,m,n,c,x1+1,y1,x2,y2);
	paths(a,m,n,c,x1,y1+1,x2,y2);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n,i,j;
		cin>>m>>n;
		int a[max][max],c=0;
		paths(a,m,n,&c,0,0,m-1,n-1);
		cout<<c<<endl;
	}
}
