#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        i=0;
        int curr=0;
        while(i<n)
        {
            if(a[i++]==0)
                a[curr++]=0;
        }
        while(curr<n)
            a[curr++]=1;
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
}
