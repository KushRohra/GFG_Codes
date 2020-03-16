using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,x;
        cin>>n;
        multimap<int,int> m;
        for(i=0;i<n;i++)
        {
            cin>>x;
            m.insert(pair<int,int> (x,1));
        }
        for(i=0;i<n;i++)
        {
            cin>>x;
            m.insert(pair<int,int> (x,2));
        }
        int c=0,max=-1;
        for(auto k=m.begin();k!=m.end();k++)
        {
            if(k->second==1)
                c++;
            else c--;
            if(c>max)
                max=c;
        }
        cout<<max<<endl;
    }
