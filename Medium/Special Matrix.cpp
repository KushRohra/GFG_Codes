#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
        int n,m,k,i,j,x,y;
        cin>>n>>m>>k;
        int dp[n][m], grid[n][m];
        memset(grid,0,sizeof(grid));
        dp[0][0]=1;
        for(i=0;i<k;i++) {
            cin>>x>>y;
            grid[x-1][y-1]=1;
        }
        bool f=0;
        for(i=0;i<n;i++)
        {
            if(grid[i][0]==1)
                f=1;
            if(f==1)
                dp[i][0]=0;
            else dp[i][0]=1;
        }
        f=0;
        for(i=0;i<m;i++)
        {
            if(grid[0][i]==1)
                f=1;
            if(f==1)
                dp[0][i]=0;
            else dp[0][i]=1;
        }
        long long int mod=1e9+7;
        for(i=1;i<n;i++)
        {
            for(j=1;j<m;j++)
            {
                if(grid[i][j]==1)
                    dp[i][j]=0;
                else dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
            }
        }
        cout<<dp[n-1][m-1]%mod<<endl;
	}
 	return 0;
}
