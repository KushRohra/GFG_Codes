// { Driver Code Starts
// C++ program to find out whether a given graph is Bipartite or not.
// It works for disconnected graph also.
#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
bool isBipartite(int G[][MAX],int V);
int main()
{
    int t;
	cin>>t;
	int g[MAX][MAX];
	while(t--)
	{
		memset(g,0,sizeof (g));
		int n;
		cin>>n;
	
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>g[i][j];
			}
		}
		
		cout<<isBipartite(g,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*The function takes an adjacency matrix representation of the graph (g)
and an integer(v) denoting the no of vertices as its arguments.
You are required to complete below method */
bool isBipartite(int G[][MAX],int V)
{
    for(int i=0;i<V;i++)
        if(G[i][i]==1)
            return false;
    bool color=1;
    int src=0;
    queue<int> q;
    vector<int> v(V,-1), vis(V,0);
    v[src]=color;
    q.push(src);
    while(!q.empty())
    {
        src=q.front();
        vis[src]=1;
        color=1-v[src];
        q.pop();
        bool currcolor=v[src];
        for(int i=0;i<V;i++)
        {
            if(G[src][i]==1)
            {
                if(v[i]==currcolor)
                    return false;
                v[i]=color;
                if(vis[i]==0) 
                    q.push(i);
            }
        }    
    }
    return true;
}
