#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int T, n, s;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        cin>>n;
        s=pow(n,3) + n;
        cout<<s<<"\n"; 
    } 
    return 0; 
}
