#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,x,s=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            s+=x;
        }
        cout<<s<<endl;
    }
}
