#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,x,sum=0,deficit=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            sum+=x;
//            cout<<sum<<" "<<deficit<<endl;
            if(sum<0)
            {
                deficit-=sum;
                sum=0;
            }
        }
        cout<<deficit+1<<endl;
    }
}
