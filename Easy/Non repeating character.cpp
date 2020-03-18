using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[26],i;
        for(i=0;i<26;i++)
            a[i]=0;
        int l,p=int('a'),x,f=0;
        cin>>l;
        char s[l];
        cin>>s;
        for(i=0;i<l;i++)
        {
            x=int(s[i])-p;
            a[x]++;
        }
        for(i=0;i<l;i++)
        {
            x=int(s[i])-p;
            if(a[x]==1)
                cout<<char(x+97)<<endl,f=1;
            if(f==1)
                break;
        }
        if(f==0)
            cout<<"-1"<<endl;
    }
}
