#include<iostream>
#include<cstring>
using namespace std;
long long dp[200][200][40];
long long cnt(long long **mat,long long r,long long c,long long k){
    if(r<0 || c<0)
        return 0;
    if(k<=0)
        return 0;
    if(k==mat[r][c] && r==0 && c==0)
        return 1;
    if(dp[r][c][k])
        return dp[r][c][k];
    
    dp[r][c][k] =  cnt(mat,r-1,c,k-mat[r][c])+cnt(mat,r,c-1,k-mat[r][c]);
    return dp[r][c][k];
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>k>>n;
        memset(dp,0,sizeof(dp));
        long long **mat = new long long*[n];
        for(long long i=0;i<n;i++)
            mat[i] = new long long[n];
        for(long long i=0;i<n;i++)
            for(long long j=0;j<n;j++)
                cin>>mat[i][j];
        cout<<cnt(mat,n-1,n-1,k)<<endl;
    }
}
