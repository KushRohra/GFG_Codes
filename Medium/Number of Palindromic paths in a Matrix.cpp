#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<char>> &v, int i, int j, int ei, int ej, string s, int &c) {
    if(i>ei || j>ej)
        return ;
    if(i==ei && j==ej)
    {
        s+=v[i][j];
        string r=s;
        reverse(r.begin(), r.end());
        if(s==r)
            c++;
        return ;
    }
    dfs(v,i+1,j,ei,ej,s+v[i][j],c);
    dfs(v,i,j+1,ei,ej,s+v[i][j],c);
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,m,i,j;
	    cin>>n>>m;
	    vector<vector<char>> v(n,vector<char>(m));
	    for(i=0;i<n;i++)
	        for(j=0;j<m;j++)
	            cin>>v[i][j];
	    int c=0;
	    string s="";
	    dfs(v,0,0,n-1,m-1,s,c);
	    cout<<c<<endl;
	}
	return 0;
}
