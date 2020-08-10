#include<bits/stdc++.h>
using namespace std;
int lis(vector<int> v)
{
    int i, j, n=v.size();
    if(n==0)
        return 0;
    vector<int> len(n,1);
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(len[i]<len[j]+1 && v[i]>v[j])
                len[i]=1+len[j];
        }
    }
    int m=INT_MIN;
    for(i=0;i<n;i++)
        m=max(m, len[i]);
    return m;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i; cin>>n;
        vector<int> v(n,0);
        for(i=0;i<n;i++)    cin>>v[i];
        cout<<lis(v)<<endl;
    }
}
