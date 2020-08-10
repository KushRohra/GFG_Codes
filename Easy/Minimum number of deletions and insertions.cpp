#include <iostream>
using namespace std;
int LCS(string A, string B, int n, int m) {
    int i,j,dp[n+1][m+1];
    for(i=0;i<n+1;i++) {
        for(j=0;j<m+1;j++) {
            if(i==0 || j==0)
                dp[i][j]=0;
            else if(A[i-1]==B[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[n][m];
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        string s1, s2;
        cin>>n>>m>>s1>>s2;
        cout<<n+m-2*LCS(s1,s2,n,m)<<endl;
    }
}
