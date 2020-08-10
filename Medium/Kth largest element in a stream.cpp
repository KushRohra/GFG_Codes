#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, x;
        cin>>k>>n;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(pq.size()<k)
            {
                pq.push(x);
            }
            else if(x>pq.top())
            {
                pq.pop();
                pq.push(x);
            }
            if(pq.size()<k)
                cout<<"-1 ";
            else cout<<pq.top()<<" ";
        }
        cout<<endl;
    }
}
