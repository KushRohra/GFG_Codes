#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,x;
	    cin>>n>>x;
	    int a[n],i;
	    bool oneGreater=false;
	    for(i=0;i<n;i++) {
	        cin>>a[i];
	        if(a[i]>x)
	        	oneGreater=true;
		}
		if(!oneGreater) {
			int sum=0,curr=0,prev=0,ans=INT_MAX;
		    while(curr<n) {
		        if(sum<=x)
		        	sum+=a[curr++];
		        else if(sum>x) {
		        	ans=min(ans,curr-prev);
		        	sum-=a[prev++];
				}
		    }
		    ans=min(ans,curr-prev+1);
		    cout<<ans<<endl;	
		}
		else cout<<"1\n";
	}
	return 0;
}
