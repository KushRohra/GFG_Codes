#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,i,mn=INT_MAX,ma=INT_MIN;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            mn=min(x,mn);
            ma=max(x,ma);
        }
        cout<<ma<<" "<<mn<<endl;
    }
}
