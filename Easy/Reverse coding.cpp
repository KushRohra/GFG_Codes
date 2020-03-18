#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,n;
        cin>>x>>n;
        x=(x*(x+1))/2;
        if(x==n)
            cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
}

