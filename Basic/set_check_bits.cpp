#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,c=0,p=0;
        cin>>n;
        x=n;
        while(x!=0)
        {
            if(x%2==1)
                p++;
            x/=2;
            c++;
        }
        if(p==c)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
