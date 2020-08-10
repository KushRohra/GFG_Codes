#include<bits/stdc++.h>
using namespace std;
#define mod 10000000
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int i,k,n,x,j; cin>>n;
        vector<long long int> v[n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>x;
                v[i].push_back(x);
            }
        }
        for(k=0;k<n;k++)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(v[i][k]+v[k][j]<v[i][j])
                        v[i][j]=v[i][k]+v[k][j];
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(v[i][j]!=mod)
                    cout<<v[i][j]<<" ";
                else cout<<"INF ";
            }
            cout<<endl;
        }
    }
}
