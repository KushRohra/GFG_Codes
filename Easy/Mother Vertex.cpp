/*
 * Function to find if there is a mother vertex in the given graph 
 * V: number of vertices in the graph
 * adj[]: graph representation
 */
void dfsUtil(vector<int> v[],int src,int V,bool vis[])
{
    vis[src]=1;
    for(auto k=v[src].begin();k!=v[src].end();k++)
    {
        if(vis[*k]==0){
            dfsUtil(v,*k,V,vis);
        }
    }
}
int findMother(int V, vector<int> adj[]) 
{ 
    bool vis[V],visagain[V];
    int i,j,k;
    for(i=0;i<V;i++)
    {
        if(vis[i]==0)
        {
            dfsUtil(adj,i,V,vis);
            j=i;   
        }
    }
    dfsUtil(adj,j,V,visagain);
    for(i=0;i<V;i++)
    {
        if(visagain[i]==0)
            return -1;
    }
    return j;
} 
