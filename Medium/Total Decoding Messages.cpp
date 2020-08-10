#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,i;
	    string s;
	    cin>>n>>s;
	    int dp[n+1];
	    memset(dp,0,sizeof(dp));
	    dp[0]=1;
	    dp[1]=s[0]=='0'?0:1;
	    for(i=2;i<n+1;i++) {
	        int one=stoi(s.substr(i-1,1));
	        int two=stoi(s.substr(i-2,2));
	        if(one>=1)
	            dp[i]+=dp[i-1];
	        if(two>=10 && two<=26)
	            dp[i]+=dp[i-2];
	    }
	    cout<<dp[n]<<endl;
	}
	return 0;
}
