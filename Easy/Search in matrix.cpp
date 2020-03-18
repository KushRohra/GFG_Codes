using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j,x,f=0;
        cin>>n>>m;
        int a[n][m];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        cin>>x;
        for(i=0;i<n;i++)
        {
        	f=0;
			if(x>=a[i][0] && x<=a[i][m-1])
            {
                int s,e,mid;
                s=0;
                e=m-1;
                
                
                    while(s<=e && f==0)
                    {
                        mid=(s+e)/2;
                        if(x==a[i][mid])
                            f=1;
                        else if(x>a[i][mid])
                            s=mid+1;
                        else e=mid-1;
                    }
                
            }
            if(f==1)
                break;
        }
        if(f==1)
            cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
}
