#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n+1];
        for(i=0;i<n;i++)
            cin>>a[i];
        a[n]=INT_MIN;
        int mid, s=0, e=n, ans;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(a[mid]>a[mid+1])
            {
                e=mid-1;
                ans=a[mid];
            }
            else s=mid+1;
        }
        cout<<ans<<endl;
    }
}
