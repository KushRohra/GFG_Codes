#include <bits/stdc++.h> 
#include <boost/multiprecision/cpp_int.hpp> 
using boost::multiprecision::cpp_int; 
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,i,j;
	    cin>>n;
	    cpp_int dp[n+1]={0};
	    dp[0]=1;
	    dp[1]=1;
	    for(i=2;i<n+1;i++)
	        for(j=0;j<i;j++)
	            dp[i]+=dp[j]*dp[i-j-1];
	    cout<<dp[n]<<endl;
	}
	return 0;
}
