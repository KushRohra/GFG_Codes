#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        unordered_map<int,int> m;
        int n,k,i;
        cin>>n>>k;
        vector<int> v(n,0);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]++;
        }
        int index=-1;
        for(i=0;i<n;i++)
        {
            if(m[v[i]]==k)
            {
                index=v[i];
                break;
            }
        }
        cout<<index<<endl;
    }
}
