#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        unordered_map<string, int> m;
        int n;
        cin>>n;
        string s;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            m[s]++;
        }
        int c=0;
        for(auto it=m.begin();it!=m.end();it++)
            if(it->second==2)
                c++;
        cout<<c<<endl;
    }
