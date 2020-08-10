#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,i;
        cin>>n;
        int res=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            res^=x;
        }
        cout<<res<<endl;
    }
}
