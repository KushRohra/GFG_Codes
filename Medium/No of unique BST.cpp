#include <iostream>
using namespace std;
unsigned long long int BST(int x)
{
    int n=2*x, k=x;
    unsigned long long int res=1;
    for(int i=0;i<k;i++)
    {
        res*=(n-i);
        res/=(i+1);
    }
    return res/(x+1);
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<BST(n)<<endl;
    }
}
