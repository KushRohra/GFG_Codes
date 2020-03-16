#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,i,x,c=0;
        cin>>a>>b;
        for(i=a;i<=b;i++)
        {
            x=sqrt(i);
            if(x*x==i)
                c++;
        }
        cout<<c<<endl;
    }
