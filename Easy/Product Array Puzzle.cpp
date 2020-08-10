#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i;
        cin>>n;
        vector<long long int> v(n,0), temp(n,1);
        for(i=0;i<n;i++)
            cin>>v[i];
        temp[n-1]=v[n-1];
        for(i=n-2;i>=0;i--)
            temp[i]=temp[i+1]*v[i];
        long long int f=1;
        for(i=0;i<n-1;i++)
        {
            cout<<temp[i+1]*f<<" ";
            f*=v[i];
        }
        cout<<f<<endl;
    }
}
