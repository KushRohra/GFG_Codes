#include<bits/stdc++.h>
using namespace std;
int startX,startY,endX,endY,ans=0;
void dfs(vector<vector<int>> &v, int i, int j, int n, bool &f) {
    if(f==1)
        return ;
    if(i<0 || i>=n || j<0 || j>=n || v[i][j]==0)
        return;
    if(i==endX && j==endY) {
        ans++;
        f=1;
        return ;
    }
    v[i][j]=0;
    dfs(v,i+1,j,n,f);
    dfs(v,i-1,j,n,f);
    dfs(v,i,j+1,n,f);
    dfs(v,i,j-1,n,f);
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,i,j;
	    cin>>n;
	    bool f=0;
	    ans=0;
	    vector<vector<int>> v(n,vector<int>(n,0));
	    for(i=0;i<n;i++) {
	        for(j=0;j<n;j++) {
	            cin>>v[i][j];
	            if(v[i][j]==1) {
	                startX=i;
	                startY=j;
	            }
	            else if(v[i][j]==2) {
	                endX=i;
	                endY=j;
	            }
	        }
	    }
	    dfs(v,startX,startY,n,f);
	    if(ans!=0)
	        cout<<"1"<<endl;
	    else cout<<"0"<<endl;
	}
	return 0;
}
