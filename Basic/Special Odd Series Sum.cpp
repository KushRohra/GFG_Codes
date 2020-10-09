class Solution {
  public:
    long long int sumOfTheSeries(long long int n){
        long long int dp[n];
        dp[0]=1;
        for(int i=1;i<n;i++) {
            dp[i]=dp[i-1]+(2*(i+1)-1);
        }
        long long int sum=0;
        for(int i=0;i<n;i++)
            sum+=dp[i];
        return sum;
    }
};
