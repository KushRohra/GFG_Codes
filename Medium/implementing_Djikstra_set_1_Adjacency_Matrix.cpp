/*  Function to implement Dijkstra
*   graph: vector of vectors which represents the graph
*   src: source vertex to start traversing graph with
*   V: number of vertices
*/
int findmin(int V,int dist[],bool vis[])
{
    int i,min=INT_MAX,index=-1;
    for(i=0;i<V;i++)
        if(vis[i]==0 && dist[i]<min)
            min=dist[i],index=i;
    return index;
}
void dijkstra(vector<vector<int>> graph, int src, int V)
{
    int u,i,j;
    int dist[V];
    bool vis[V];
    for(i=0;i<V;i++)
        dist[i]=INT_MAX,vis[i]=0;
    dist[src]=0;
    for(i=0;i<V;i++)
    {
        u=findmin(V,dist,vis);
        vis[u]=1;
        for(j=0;j<V;j++)
        {
            if(vis[j]==0 && graph[u][j]!=0 && dist[u]!=INT_MAX && dist[u]+graph[u][j]<dist[j])
                dist[j]=dist[u]+graph[u][j];
        }
    }
    for(i=0;i<V;i++)
        cout<<dist[i]<<" ";
}
