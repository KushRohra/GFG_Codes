/* This function is used to detect a cycle in undirected graph
*  adj[]: array of vectors to represent graph
*  V: number of vertices
*/
bool cycleutil(int s,vector<int> adj[],bool vis[],int parent)
{
    vis[s]=true;
    int k;
    for(int i=0;i<adj[s].size();i++)
    {
        k=adj[s][i];
        if(vis[k]==false)
        {
            if(cycleutil(k,adj,vis,s)==true)
                return true;
        }
        else if(k!=parent)
            return true;
    }
    return false;
}
bool isCyclic(vector<int> adj[], int V)
{
   bool vis[V];
   for(int i=0;i<V;i++)
   {
       if(vis[i]==false)
            if(cycleutil(i,adj,vis,-1)==true)
                return 1;
   }
   return 0;
