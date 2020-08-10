#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,i,x;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    cin>>x;
	    int ans=-1;
	    for(i=0;i<n;i++)
	        if(a[i]==x) {
	            ans=i;
	            break;
	        }
	    cout<<ans<<endl;
	}
	return 0;
}
