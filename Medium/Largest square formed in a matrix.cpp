#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,m,i,j;
	    cin>>n>>m;
	    int dp[n][m];
	    for(i=0;i<n;i++)
	        for(j=0;j<m;j++)
	            cin>>dp[i][j];
	    int ans=0;
	    for(i=1;i<n;i++)
	        for(j=1;j<m;j++)
	            if(dp[i][j])
	                dp[i][j]=min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1]))+1;
	    for(i=0;i<n;i++)
	        for(j=0;j<m;j++)
	               ans=max(ans,dp[i][j]);
	    cout<<ans<<endl;
	}
	return 0;
}
