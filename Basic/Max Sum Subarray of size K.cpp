#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,k;
	    cin>>n>>k;
	    int a[n],i;
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    int sum=0,c=0,j=0,ans=INT_MIN;
	    for(i=0;i<k;i++)
	    	sum+=a[i];
	    while(i<n)  {
	    	//cout<<sum<<" "<<a[i]<<" "<<a[j]<<endl;
	    	ans=max(ans,sum);
	    	sum+=a[i]-a[j];
	    	j++;
	    	i++;
		}
		ans=max(ans,sum);
	    cout<<ans<<endl;
	}
	return 0;
}
