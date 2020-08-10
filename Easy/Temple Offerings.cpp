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
        vector<int> v(n,0), left(n,1), right(n,1);
        for(i=0;i<n;i++)
            cin>>v[i];
        for(i=1;i<n;i++)
            if(v[i]>v[i-1])
                left[i]=left[i-1]+1;
        for(i=n-2;i>=0;i--)
            if(v[i]>v[i+1])
                right[i]=right[i+1]+1;
        int ans=0;
        for(i=0;i<n;i++)
        {
            //cout<<left[i]<<" "<<right[i]<<endl;
            ans+=max(left[i], right[i]);
        }
        cout<<ans<<endl;
    }
}