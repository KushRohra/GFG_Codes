#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        int res=0;
        if(n%2==0)
            cout<<res<<endl;
        else
        {
            for(i=0;i<n;i++)
                if(i%2==0)
                    res=res^arr[i];
            cout<<res<<endl;
        }
    }
}
