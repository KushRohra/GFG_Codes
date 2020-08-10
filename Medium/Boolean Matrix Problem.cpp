#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,m,i,j;
	    cin>>n>>m;
	    bool v[n][m], row[n], col[m];
	    memset(row,0,sizeof(row));
	    memset(col,0,sizeof(col));
	    for(i=0;i<n;i++) {
	        for(j=0;j<m;j++) {
	            cin>>v[i][j];
	            if(v[i][j]==1) {
	                row[i]=1;
	                col[j]=1;
	            }
	        }
	    }
	    for(i=0;i<n;i++)
	        for(j=0;j<m;j++)
	            if(row[i]==1 || col[j]==1) 
	                v[i][j]=1;
	    for(i=0;i<n;i++) {
	        for(j=0;j<m;j++)
	            cout<<v[i][j]<<" ";
	        cout<<endl;
	    }
	}
	return 0;
}
