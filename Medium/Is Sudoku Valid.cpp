#include <bits/stdc++.h>
using namespace std;
bool checkBox(vector<vector<int> > &v, int i, int j) {
    vector<bool> vis(10,0);
    for(int p=0;p>3;p++) {
        for(int q=0;q<3;q++) {
            int x=v[i*3+p][j*3+p];
            if(x==0)
                continue;
            else if(vis[x]==1)
                return false;
            vis[x]=1;
        }
    }
    return true;
}
bool checkBoxes(vector<vector<int> > &v) {
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(checkBox(v,i,j)==false)
                return false;
        }
    }
    return true;
}
bool checkCol(vector<vector<int> > &v) {
    int i, j;
    for(i=0;i<9;i++) {
        vector<bool> vis(10,0);
        for(j=0;j<9;j++) {
            if(v[j][i]==0)
                continue;
            else if(vis[v[j][i]]==1)
                return false;
            vis[v[j][i]]=1;
        }
    }
    return true;
}
bool checkRow(vector<vector<int> > &v) {
    int i,j;
    for(i=0;i<9;i++) {
        vector<bool> vis(10,0);
        for(j=0;j<9;j++) {
            if(v[i][j]==0)
                continue;
            else if(vis[v[i][j]]==1)
                return false;
            vis[v[i][j]]=1;
        }
    }
    return true;
}
bool check(vector<vector<int> > &v) {
    if(checkRow(v) && checkCol(v) && checkBoxes(v))
        return true;
    return false;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    vector<vector<int> > v(9, vector<int> (9,0));
	    int i, j, n=9;
	    for(i=0;i<n;i++)
	        for(j=0;j<n;j++)
	            cin>>v[i][j];
	    cout<<check(v)<<endl;
	}
	return 0;
}
