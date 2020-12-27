#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,k,i,maxEle=0,x;
	    cin>>n>>k;
	    for(i=0;i<n;i++) {
	        cin>>x;
	        maxEle=max(maxEle,x);
	    }
	    if(k>=maxEle)
	        cout<<"-1"<<endl;
	    else cout<<maxEle-k<<endl;
	}
	return 0;
}
