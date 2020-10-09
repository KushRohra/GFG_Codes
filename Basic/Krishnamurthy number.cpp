class Solution {
  public:
    string isKrishnamurthy(int N) {
        int temp=N,dp[10];
        dp[0]=1;
        for(int i=1;i<10;i++)
            dp[i]=dp[i-1]*i;
        int sum=0;
        while(N) {
            sum+=dp[N%10];
            N/=10;
        }
        return sum==temp ? "YES" : "NO";
    }
};
