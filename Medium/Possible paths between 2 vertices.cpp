#include<bits/stdc++.h>
using namespace std;
void dfs(int s, int e, vector<int> adj[], int &c, bool vis[]) {
    //cout<<s<<" "<<e<<endl;
    vis[s]=1;
    if(s==e) {
        c++;
        return ;
    }
    for(auto i:adj[s]) {
        if(vis[i]==0) {
            dfs(i,e,adj,c,vis);
            vis[i]=0;
        }
    }
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,e,i,j,x,y;
	    cin>>n>>e;
	    vector<int> adj[n];
	    for(i=0;i<e;i++) {
	        cin>>x>>y;
	        adj[x-1].push_back(y-1);
	    }
	    int start, end;
	    cin>>start>>end;
	    bool vis[n]={0};
	    int c=0;
	    dfs(start-1,end-1,adj,c,vis);
	    cout<<c<<endl;
	}
	return 0;
}
