#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    map<int, vector<int>, greater<int>> m;
	    int n,i,x;
	    cin>>n;
	    for(i=0;i<n;i++) {
	        cin>>x;
	        m[x].push_back(i);
	    }
	    cin>>x;
	    i=0;
	    for(auto it:m) {
	        for(auto ele:it.second)
	            cout<<ele<<" ";
	        i++;
	        if(i==x)
	            break;
	    }
	    cout<<endl;
	}
	return 0;
}
