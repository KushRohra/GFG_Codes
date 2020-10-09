#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,i,x;
	    unordered_set<int> s;
	    for(i=0;i<n;i++) {
	        cin>>x;
	        s.insert(x);
	    }
	    for(i=1;i<=n;i++) {
	        if(s.find(i)==s.end())
	            cout<<i<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
