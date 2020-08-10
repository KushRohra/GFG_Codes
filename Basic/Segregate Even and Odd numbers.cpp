#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int x;
        vector<int> even,odd;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x%2)
                odd.push_back(x);
            else even.push_back(x);
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        for(auto i:even)
            cout<<i<<" ";
        for(auto i:odd)
            cout<<i<<" ";
        cout<<"\n";
    }
}
