#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            cout<<1-x<<" ";
        }
        cout<<endl;
    }
}
