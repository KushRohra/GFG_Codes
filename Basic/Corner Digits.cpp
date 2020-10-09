#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t-- ){
	    int n;
	    cin>>n;
	    int first=-1, last, x;
	    while(n) {
	        x=n%10;
	        if(first==-1)
	            first=x;
	        last=x;
	        n/=10;
	    }
	    cout<<last<<" "<<first<<endl;
	}
	return 0;
}
