#include <iostream>
#include<math.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x;
        cin>>x;
        int arr[32]={0}, i=0;
        while(x)
        {
            arr[i]=x%2;
            x/=2;
            i++;
        }
        x=0;
        for(i=0;i<32;i++)
        {
            x = x + arr[i]*pow(2,31-i);
        }
        cout<<x<<endl;
    }
}
