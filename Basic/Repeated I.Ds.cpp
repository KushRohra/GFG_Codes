#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int i,x;
	    unordered_set<int> s;
	    for(i=0;i<n;i++) {
	        cin>>x;
	        if(s.find(x)==s.end()) {
	            s.insert(x);
	            cout<<x<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
