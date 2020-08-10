#include <iostream>
#include<math.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, c=0, i;
        cin>>n;
        for(i=1;i*i<=n;i++)
                c++;
        cout<<c<<endl;
    }
}
