// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/*  Function to check if the given graph contains cycle
*   V: number of vertices
*   adj[]: representation of graph
*/
bool cycle(vector<int> adj[], int src, vector<bool> &vis, vector<bool> &rec)
{
    if(!vis[src])
    {
        vis[src]=1;
        rec[src]=1;
        for(auto it=adj[src].begin(); it!=adj[src].end(); it++)
        {
            if(!vis[*it] && cycle(adj, *it, vis, rec))
                return true;
            else if(rec[*it])
                return true;
        }
    }
    rec[src]=0;
    return false;
}
bool isCyclic(int V, vector<int> adj[])
{
    vector<bool> vis(V,0), rec(V,0);
    for(int i=0;i<V;i++)
    {
        if(!vis[i])
        {
            if(cycle(adj, i, vis, rec))
                return true;
        }
    }
    return false;
}

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int v, e;
	    cin >> v >> e;
	    
	    vector<int> adj[v];
	    
	    for(int i =0;i<e;i++){
	        int u, v;
	        cin >> u >> v;
	        adj[u].push_back(v);
	    }
	    
	    cout << isCyclic(v, adj) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
