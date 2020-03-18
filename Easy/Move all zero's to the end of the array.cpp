using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,z=0,x;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x==0)
                z++;
            else cout<<x<<" ";
        }
        while(z!=0)
        {
            cout<<"0 ";
            z--;
        }
        cout<<endl;
    }
}
