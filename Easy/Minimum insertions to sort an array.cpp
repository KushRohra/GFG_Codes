#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,i,j;
	    cin>>n;
	    int a[n],dp[n],x=0;
	    for(i=0;i<n;i++)
	        cin>>a[i], dp[i]=1;
	    for(i=1;i<n;i++)
	    {
	        for(j=0;j<i;j++)
	            if(a[i]>=a[j])
	                dp[i]=max(dp[i], 1+dp[j]);
	        x=max(x,dp[i]);
	    }
	    cout<<n-x<<endl;
	}
	return 0;
}
