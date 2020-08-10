#include<bits/stdc++.h>
using namespace std;
int find(vector<int> v, int x)
{
    int s=0, e=v.size()-1, mid;
    while(s<=e)
    {
        mid=(e-s)/2+s;
        if(v[mid]==x)
            return mid;
        else if(v[mid]>x)
            e=mid-1;
        else s=mid+1;
    }
    return mid;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n,0), res;
        for(int i=0;i<n;i++)
            cin>>v[i];
        int k,x;
        cin>>k>>x;
        int pos=find(v,x), i=pos-1, j=pos+1;
        while(k>0 && i>=0 && j<n)
        {
            res.push_back(v[i]);
            res.push_back(v[j]);
            k-=2;   i--;   j++;
        }
        if(i>=0)
        {
            while(k>0 && i>=0)
            {
                res.push_back(v[i]);
                k--; i--;
            }
        }
        if(j<n)
        {
            while(k>0 && j<n)
            {
                res.push_back(v[j]);
                k--; j++;
            }
        }
        sort(res.begin(), res.end());
        for(i=0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }
}
