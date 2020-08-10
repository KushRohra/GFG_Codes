#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,bit;
        cin>>n>>bit;
        n&(1<<bit) ? cout<<"Yes\n" : cout<<"No\n";
    }
}
