#include <bits/stdc++.h>
using namespace std;
void addOrange(queue<pair<int, int>> &q, vector<vector<int>> &v, int x, int y, int &fresh, int n, int m) {
    int newX, newY;
    int X[]={1,-1,0,0};
    int Y[]={0,0,1,-1};
    for(int i=0;i<4;i++) {
        newX=x+X[i];
        newY=y+Y[i];
        if(newX>=0 && newY>=0 && newX<n && newY<m && v[newX][newY]==1) {
            v[newX][newY]=2;
            fresh--;
            q.push({newX,newY});
        }
    }
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,m,i,j;
	    cin>>n>>m;
	    vector<vector<int>> v(n,vector<int>(m,0));
	    int fresh=0;
	    queue<pair<int, int>> q;
	    for(i=0;i<n;i++) {
	        for(j=0;j<m;j++) {
	            cin>>v[i][j];
	            if(v[i][j]==1)
	                fresh++;
	            else if(v[i][j]==2)
	                q.push({i,j});
	        }
	    }
	    int c=0;
	    while(!q.empty()) {
	        int size=q.size();
	        c++;
	        for(i=0;i<size;i++) {
	            int x=q.front().first, y=q.front().second;
	            q.pop();
	            addOrange(q,v,x,y,fresh,n,m);
	        }
	    }
	    if(fresh==0)
	        cout<<c-1<<endl;
	    else cout<<"-1\n";
	}
	return 0;
}
