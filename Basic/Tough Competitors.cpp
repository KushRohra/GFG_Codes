#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int a[n],i,j,minDiff=INT_MAX;
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    for(i=0;i<n;i++) {
	        for(j=i+1;j<n;j++)
	            minDiff=min(minDiff,abs(a[j]-a[i]));
	    }
	    cout<<minDiff<<endl;
	}
	return 0;
}
