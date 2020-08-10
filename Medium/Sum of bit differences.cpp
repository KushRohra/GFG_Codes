#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int a[n],ans=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(int j=0;j<32;j++)
        {
            int zero=0, one=0;
            for(i=0;i<n;i++)
            {
                if(a[i]&(1<<j))
                    one++;
                else zero++;
            }
            ans+=(2*zero*one);
        }
        cout<<ans<<endl;
    }
}
