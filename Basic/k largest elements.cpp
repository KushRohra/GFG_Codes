#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,x;
        cin>>n>>k;
        priority_queue<int, vector<int>, greater<int> > pq;
        for(i=0;i<n;i++)
        {
            cin>>x;
            pq.push(x);
            if(pq.size()>k)
                pq.pop();
        }
        vector<int> v;
        while(pq.size())
        {
            v.push_back(pq.top());
            pq.pop();
        }
        reverse(v.begin(), v.end());
        for(auto x:v)
            cout<<x<<" ";
        cout<<endl;
    }
}
