#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int x,i;
        set<int> s1,s2;
        for(i=0;i<m;i++)
        {
            cin>>x;
            s1.insert(x);
        }
        for(i=0;i<n;i++)
        {
            cin>>x;
            s2.insert(x);
        }
        int c=0;
        for(auto it=s1.begin();it!=s1.end();it++)
        {
            if(s2.find(*it)!=s2.end())
                c++;
        }
        cout<<c<<endl;
    }
