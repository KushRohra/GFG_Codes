using namespace std;
#include<string.h>
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i,l=s.length();
        int w,a[26],p=int('a');
        for(i=0;i<26;i++)
            a[i]=0;
        for(i=0;i<l;i++)
        {
            w=int(s[i])-p;
            a[w]++;
        }
        int f=0;
        for(i=0;i<l;i++)
        {
            f=0;
            char b=s[i];
            w=int(b)-p;
            if(a[w]>1)
            {
                f=1;
                cout<<s[i]<<endl;
            }
            if(f==1)
                break;
        }
        if(f==0)
            cout<<"-1\n";
        
    }
