/* You have to complete this function*/
/* Function to do BFS of graph
*  adj[]: array of vectors
*  vis[]: array to keep track of visited nodes
*/
void bfs(int s, vector<int> adj[], bool vis[])
{
    int i,j;
	queue<int> q;
	q.push(s);
	vis[s]=1;
	while(!q.empty())
	{
		i=q.front();
		cout<<i<<" ";
		q.pop();
		for(j=0;j<adj[i].size();j++)
		{
			int k=adj[i][j];
			if(vis[k]==0)
			{
				q.push(k);
				vis[k]=1;
			}
		}
	}
}
