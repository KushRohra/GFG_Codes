#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,m,j,x,sum=0;
	    cin>>n>>m;
	    j=m;
	    while(n--) {
	        m=j;
	        while(m--) {
	            cin>>x;
	            sum+=x;
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
