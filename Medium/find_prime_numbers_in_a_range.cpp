using namespace std;
int isprime(int n)
{
    int i=2;
    while(i*i<=n)
    {
        if(n%i==0)
            return 0;
        i++;
    }
    return 1;
}
int main() 
{
	int n;
	cin>>n;
	int start[n],end[n],min=999999999,max=-1;
	for(int i=0;i<n;i++)
	{
	    cin>>start[i]>>end[i];
	    if(start[i]<min)
	        min=start[i];
	    if(end[i]>max)
	        max=end[i];
	}
	bool a[max+1]={0};
	for(int i=min;i<=max;i++)
	{
	    if(isprime(i)==1)
	        a[i]=1;
	}
	a[0]=a[1]=0;
	for(int i=0;i<n;i++)
	{
	    min=start[i];
	    max=end[i];
	    int c=0;
	    for(int j=min;j<=max;j++)
	    {
	        if(a[j]==1)
	            cout<<j<<" ";
	    }
	    cout<<endl;
	}
