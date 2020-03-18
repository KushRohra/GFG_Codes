#include<bits/stdc++.h>
using namespace std;
void tcutil(vector< vector<int> > v, vector< vector<int> > &sol, int s, int p, vector<int> &vis)
{
    sol[s][p] = 1;
    vis[p] = 1;
    for(auto i=v[p].begin();i!=v[p].end();i++)
    {
        if(vis[*i]==0)
        {
            tcutil(v,sol,s,*i,vis);
        }
    }
}
vector< vector<int> > tc(vector< vector<int> > v, int n)
{
    int i,j,x=0;
    vector< vector<int> > sol;
    for(i=0;i<n;i++)
    {
        vector<int> v1;
        for(j=0;j<n;j++)
        {
            v1.push_back(x);
        }
        sol.push_back(v1);
    }
    for(i=0;i<n;i++)
    {
        vector<int> vis(n,0);
        tcutil(v,sol,i,i,vis);
    }
    return sol;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        vector< vector<int> > v;
        for(i=0;i<n;i++)
        {
            vector<int> p;
            for(j=0;j<n;j++)
            {
                int x;
                cin>>x;
                if(x==1)
                    p.push_back(j);
            }
            v.push_back(p);
        }
        v=tc(v,n);
        for(i=0;i<v.size();i++)
        {
            for(j=0;j<v[i].size();j++)
            {
                cout<<v[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
