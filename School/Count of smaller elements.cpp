#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int a[n],i;
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    int k,c=0;
	    cin>>k;
	    for(i=0;i<n;i++) 
	        if(a[i]<=k)
	            c++;
	    cout<<c<<endl;
	}
	return 0;
}
