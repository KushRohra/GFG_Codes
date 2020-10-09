#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,x,i;
	    cin>>n>>x;
	    int a[n];
	    unordered_map<int,int> m;
	    for(i=0;i<n;i++) {
	        cin>>a[i];
	        m[a[i]]++;
	    }
	    int avg;
	    vector<int> v(n);
	    for(i=0;i<n;i++) {
	        avg=(x+a[i])/2;
	        v[i]=m[avg];
	    }
	    for(auto ele:v) 
	        cout<<ele<<" ";
	    cout<<endl;
	}
	return 0;
}
