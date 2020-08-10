#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,p;
        cin>>n;
        priority_queue<long long int, vector<long long int>, greater<long long int>> pq;
        for(i=0;i<n;i++)
        {
            cin>>p;
            pq.push(p);
        }
        long long int x,y,sum=0;
        while(pq.size()>1)
        {
            x=pq.top();
            pq.pop();
            y=pq.top();
            pq.pop();
            sum+=x+y;
            pq.push(x+y);
        }
        cout<<sum<<endl;
    }
}	
