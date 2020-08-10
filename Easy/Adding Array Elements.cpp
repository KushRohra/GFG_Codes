#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int y,c=0,n,i,x,K;
        cin>>n>>K;
        priority_queue<int, vector<int>, greater<int> > pq;
        for(i=0;i<n;i++)
        {
            cin>>x;
            pq.push(x);
        }
        while(pq.size()>1 && pq.top()<K)
        {
            x=pq.top();
            pq.pop();
            y=pq.top();
            pq.pop();
            pq.push(x+y);
            c++;
        }
        pq.top()<K ? c=-1 : c=c;
        cout<<c<<endl;
    }
}
