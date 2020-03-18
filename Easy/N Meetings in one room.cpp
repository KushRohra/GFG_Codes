using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],start_time[n],end_time[n],i,j,min;
		for(i=0;i<n;i++)
			a[i]=i+1;
		for(i=0;i<n;i++)
			cin>>start_time[i];
		for(i=0;i<n;i++)
		{
			cin>>end_time[i];
			for(j=0;j<i;j++)
			{
				if(end_time[i]<end_time[j])
				{
					min=end_time[j];
					end_time[j]=end_time[i];
					end_time[i]=min;
					min=start_time[j];
					start_time[j]=start_time[i];
					start_time[i]=min;
					min=a[j];
					a[j]=a[i];
					a[i]=min;
				}
			}
		}
		int c=0,k=0;
		for(i=0;i<n;i++)
		{
			if(i==0)
			{
				cout<<a[i]<<" ";
				k=i;
			}
			else
			{
				if(start_time[i]>=end_time[k])
				{
					cout<<a[i]<<" ";
					k=i;
				}	
				
			}
		}
		cout<<endl;
	}
}
