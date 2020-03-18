/* Function to do DFS of graph
*  g[]: array of vectors to represent graph
*  vis[]: array to keep track of visited vertex
*/
void dfs(int s, vector<int> g[], bool vis[])
{
    vis[s]=true;
	cout<<s<<" ";
	int k;
	for(int i=0;i<g[s].size();i++)
	{
		k=g[s][i];
		if(vis[k]==false)
		{
		    vis[k]=true;
			dfs(k,g,vis);
		}
	}
}
