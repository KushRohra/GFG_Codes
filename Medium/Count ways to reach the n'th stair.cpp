#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int mod=1e9+7;
	int t,i,max;
	cin>>t;
	int a[t];
	for(i=0;i<t;i++)
	{
	    cin>>a[i];
	    if(a[i]>max)
	        max=a[i];
	}
	int dp[max+2]={0};
    dp[1]=1;
    for(i=2;i<max+2;i++)
        dp[i]+=(dp[i-1]+dp[i-2])%mod;
    for(i=0;i<t;i++)
        cout<<dp[a[i]+1]%mod<<endl;
	return 0;
}
