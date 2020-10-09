#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int i,n,index,ele,x;
	    cin>>n>>index;
	    for(i=0;i<n;i++) {
	        cin>>x;
	        if(i==index)
	            ele=x;
	    }
	    cout<<ele<<"\n";
	}
	return 0;
}
