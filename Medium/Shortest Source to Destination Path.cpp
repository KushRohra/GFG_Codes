#include<bits/stdc++.h>
using namespace std;
bool isSafe(int x, int y, int n, int m) {
    if(x>=0 && x<n && y>=0 && y<m)
        return 1;
    return 0;
}
int main() {
	int t;
	cin>>t;
	while(t--) 
	{
	    int n,m,i,j,destX,destY,ans=INT_MAX;
	    cin>>n>>m;
	    int a[n][m];
	    for(i=0;i<n;i++)
	        for(j=0;j<m;j++)
	            cin>>a[i][j];
	    queue<pair<pair<int, int>,int>> q;
	    cin>>destX>>destY;
	    q.push({{0,0},0});
	    if(a[0][0]==0 || a[destX][destY]==0) {
	        cout<<"-1\n";
	        continue;
	    }
	    a[0][0]=0;
	    int X[]={1,-1,0,0};
	    int Y[]={0,0,1,-1};
	    int newX, newY, x, y, dist;
	    while(!q.empty()) {
	        x=q.front().first.first;
	        y=q.front().first.second;
	        dist=q.front().second;
	        q.pop();
	        if(x==destX && y==destY)
    	        ans=min(ans,dist);
	        for(i=0;i<4;i++) {
	            newX=x+X[i];
	            newY=y+Y[i];
	            if(isSafe(newX,newY,n,m) && a[newX][newY]==1) {
	                q.push({{newX,newY},dist+1});
	                a[newX][newY]=0;
	            }
	        }
	    }
	    if(ans==INT_MAX)
	        cout<<"-1\n";
	    else cout<<ans<<endl;
	}
	return 0;
}
