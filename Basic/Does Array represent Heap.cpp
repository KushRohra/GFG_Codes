#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i;   cin>>n;
        int a[n], f=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            int left=2*i+1, right=2*i+2;
            if(left<n)
            {
                if(a[i]<=a[left])
                    f=1;
            }
            if(right<n)
            {
                if(a[i]<=a[right])
                    f=1;
            }
            if(f==1)
                break;
        }
        cout<<1-f<<endl;
    }
}
