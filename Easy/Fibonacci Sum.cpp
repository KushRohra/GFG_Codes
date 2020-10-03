#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,i,max=INT_MIN;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++) {
	    cin>>a[i];
	    if(a[i]>max)
	        max=a[i];
	}
	int dp[max+1];
	dp[0]=0;
	dp[1]=1;
	for(i=2;i<max+1;i++)
	    dp[i]=(dp[i-1]+dp[i-2])%1000000007;
	for(i=1;i<max+1;i++)
	    dp[i]+=dp[i-1]%1000000007;
	for(i=0;i<n;i++)
	    cout<<dp[a[i]]%1000000007<<endl;
	return 0;
}
