#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        while(n)
        {
            n/=2;
            c++;
        }
        cout<<(1<<c)<<endl;
    }
}
