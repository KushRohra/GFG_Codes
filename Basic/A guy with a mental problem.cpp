#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    long long int x,i,sum1=0,sum2=0;
	    for(i=0;i<n;i++) {
	        cin>>x;
	        if(i%2)
	            sum1+=x;
	        else sum2+=x;
	    }
	    for(i=0;i<n;i++) {
	        cin>>x;
	        if(i%2)
	            sum2+=x;
	        else sum1+=x;
	    }
	    cout<<min(sum1,sum2)<<endl;
	}
	return 0;
}
