#include<bits/stdc++.h>
using namespace std;
int LIS(string s)
{
    int n=s.length(),i,j;
    int dp[n],max=INT_MIN;
    dp[0]=1;
    for(i=1;i<n;i++)
    {
        dp[i]=1;
        for(j=0;j<i;j++)
        {
            if(int(s[i])>int(s[j]) && dp[i]<=dp[j])
                dp[i]=1+dp[j];
            if(dp[i]>max)
                max=dp[i];
        }
    }
    return max;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    string s;
	    cin>>s;
	    cout<<LIS(s)<<endl;
	}
	return 0;
}
