#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    long long int n,i,b,x;
	    cin>>n>>b;
	    for(i=0;i<n;i++) {
	        cin>>x;
	        if(x==b)
	            b*=2;
	    }
	    cout<<b<<endl;
	}
	return 0;
}
