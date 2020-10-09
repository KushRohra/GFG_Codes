#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,x,sum=0;
	    cin>>n;
	    while(n--) {
	        cin>>x;
	        sum+=x;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
