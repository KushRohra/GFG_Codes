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
        /*for(i=0;i<26;i++)
            cout<<a[i]<<" ";*/
        for(i=0;i<26;i++)
        {
            while(a[i]!=0)
            {
                cout<<char(i+p);
                a[i]--;
            }
        }
        cout<<endl;
    }
