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
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        int max=INT_MIN;
        for(i=0;i<n-1;i++)
        {
            int x=a[i]+a[i+1];
            if(max<x)
                max=x;
        }
        cout<<max<<endl;
    }
}