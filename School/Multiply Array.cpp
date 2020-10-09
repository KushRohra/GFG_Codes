#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,x,i;
	    cin>>n;
	    long long int f=1;
	    for(i=0;i<n;i++) {
	        cin>>x;
	        f*=x;
	    }
	    cout<<f<<"\n";
	}
	return 0;
}	
