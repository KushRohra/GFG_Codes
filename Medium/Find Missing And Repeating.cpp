#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,extra;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        i=0;
        while(i<n)
        {
            if(i+1==a[i])
                i++;
            else
            {
                if(a[a[i]-1]==a[i])
                    extra=a[i++];
                else swap(a[i],a[a[i]-1]);
            }
        }
        int missing;
        for(i=0;i<n;i++)
            if(a[i]!=i+1)
                missing=i+1;
        cout<<extra<<" "<<missing<<endl;
    }
}
