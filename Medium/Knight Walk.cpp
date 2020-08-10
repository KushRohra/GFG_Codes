#include <bits/stdc++.h>
using namespace std;
bool isSafe(int x, int y, int n, int m) {
    if(x>0 && y>0 && x<=n && y<=m)
        return true;
    return false;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,m,s1,s2,s3,s4,ans=INT_MAX;
	    cin>>n>>m>>s1>>s2>>s3>>s4;
	    int x,y,newX,newY,dist;
	    int X[]={2,2,-2,-2,1,1,-1,-1};
	    int Y[]={1,-1,1,-1,2,-2,2,-2};
	    queue<pair<pair<int, int>, int>> q;
	    set<pair<int, int>> s; 
	    q.push({{s1,s2},0});
	    while(!q.empty()) {
	        x=q.front().first.first;
	        y=q.front().first.second;
	        dist=q.front().second;
	        if(x==s3 && y==s4)
	            ans=min(ans,dist);
	        q.pop();
	        if(s.find({x,y})!=s.end())
	            continue;
	        s.insert({x,y});
	        for(int i=0;i<8;i++) {
	            newX=x+X[i];
	            newY=y+Y[i];
	            if(isSafe(newX,newY,n,m))
	                q.push({{newX,newY},dist+1});
	        }
	    }
	    if(ans==INT_MAX)
	        cout<<"-1\n";
	    else cout<<ans<<endl;
	}
	return 0;
}
