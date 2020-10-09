#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,x,i,ele,first=-1,second=-1;
	    cin>>n>>x;
	    for(i=0;i<n;i++) {
	        cin>>ele;
	        if(ele==x) {
	            if(first==-1)
	                first=i;
	            second=i;
	        }
	    }
	    if(first==-1)  {
	        cout<<"-1\n";
	        continue;
	    }
	    cout<<first<<" "<<second<<endl;
	}
	return 0;
}
