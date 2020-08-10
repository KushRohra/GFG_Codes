#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,k;
        cin>>n>>k;
        vector<int> v(n,0);
        for(i=0;i<n;i++)
            cin>>v[i];
        sort(v.begin(), v.end());
        int x, y, minCost=0, maxCost=0;
        k++;
        x=n/k;
        if(n%k!=0)
            x++;
        y=x;
        i=0;
        while(x--)
            minCost+=v[i++];
        i=n-1;
        while(y--)
            maxCost+=v[i--];
        cout<<minCost<<" "<<maxCost<<endl;
    }
}
