#include<bits/stdc++.h>
using namespace std;
struct comp { 
     bool operator()( 
        pair<int, int> const& a, 
        pair<int, int> const& b) 
    { 
        if(a.first==b.first)
            return a.second>b.second;
        else return a.first<b.first;
    } 
}; 
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i, x;   cin>>n;
        map<int, int> mp;
        for(i=0;i<n;i++)
        {
            cin>>x;
            mp[x]++;
        }
        vector<int> v;
        priority_queue<pair<int, int>, vector<pair<int, int>>, comp> pq;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            //cout<<it->first<<" "<<it->second<<endl;
            pq.push(make_pair(it->second, it->first));
        }
        while(!pq.empty())
        {
            int x=pq.top().first, y=pq.top().second;    pq.pop();
            for(i=0;i<x;i++)
                cout<<y<<" ";
        }
        cout<<endl;
    }
}
