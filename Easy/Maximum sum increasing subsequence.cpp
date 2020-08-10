#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,i,j;
	    cin>>n;
	    vector<int> v(n,0);
	    for(i=0;i<n;i++)
	        cin>>v[i];
	    int dp[n];
	    for(i=0;i<n;i++)
	        dp[i]=v[i];
	    for(i=1;i<n;i++)
	        for(j=0;j<i;j++)
	            if(v[i]>v[j])
	                dp[i]=max(dp[i], dp[j]+v[i]);
	    cout<<*max_element(dp,dp+n)<<endl;
	}
	return 0;
}
