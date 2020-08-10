#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        long long int ans=l;
        for(int i=l+1;i<=r;i++)
            ans=ans&i;
        cout<<ans<<endl;
    }
}
