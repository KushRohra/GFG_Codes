#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,x,i;
	    cin>>n;
	    unordered_map<int, int> m1,m2;
	    for(i=0;i<n;i++) {
	        cin>>x;
	        m1[x]++;
	    }
	    for(i=0;i<n;i++) {
	        cin>>x;
	        m2[x]++;
	    }
	    int f=0;
	    for(auto ele:m1) {
	        if(m2[ele.first]!=ele.second)
	            f=1;
	        if(f==1)
	            break;
	    }
	    cout<<1-f<<endl;
	}
	return 0;
}
