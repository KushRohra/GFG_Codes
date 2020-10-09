#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int i,x,n,maxVal=INT_MIN;
	    cin>>n;
	    for(i=0;i<n;i++) {
	        cin>>x;
	        maxVal=max(maxVal,x);
	    }
	    cout<<maxVal<<"\n";
	}
	return 0;
}
