#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],i,max=INT_MIN;
	for(i=0;i<n;i++) {
	    cin>>a[i];
	    if(a[i]>max)
	        max=a[i];
	}
	long long int dp[max],least;
	dp[0]=1;
	long long int x=0,y=0,z=0,two=2,three=3,five=5;
	for(i=1;i<max;i++) {
	    least=min(two,min(three,five));
	    dp[i]=least;
	    if(least==two) {
	        x++;
	        two=dp[x]*2;
	    }
	    if(least==three) {
	        y++;
	        three=dp[y]*3;
	    }
	    if(least==five) {
	        z++;
	        five=dp[z]*5;
	    }
	}
	for(i=0;i<n;i++)
	    cout<<dp[a[i]-1]<<" \n";
} 
