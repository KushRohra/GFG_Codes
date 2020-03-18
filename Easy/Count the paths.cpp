#include<bits/stdc++.h>
using namespace std;
void dfsUtil(vector<int> adj[],int src,int s,int d,bool vis[],int *c)
{
    vis[src]=1;
    if(s==d)
        (*c)++;
    else
    {
        for(auto i=adj[s].begin();i!=adj[s].end();i++)
        {
            if(vis[*i]==0)
            {
                vis[*i]=1;
                dfsUtil(adj,src,*i,d,vis,c);
                vis[*i]=0;
            }
        }
    }
}
int dfs(vector<int> adj[],int n,int s,int d)
{
    int c=0;
    bool vis[n];
    dfsUtil(adj,s,s,d,vis,&c);
    return c;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,e,i,j,x,y;
        cin>>n>>e;
        vector<int> adj[n];
        for(i=0;i<e;i++)
        {
            cin>>x>>y;
            adj[x].push_back(y);
        }
        int s,d;
        cin>>s>>d;
        cout<<dfs(adj,n,s,d)<<endl;;
    }
}
