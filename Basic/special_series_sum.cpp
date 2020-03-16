#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,c=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            c+=i*(n-i+1);
        }
        cout<<c<<endl;
    }
