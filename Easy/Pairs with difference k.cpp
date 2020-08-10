#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,k,i;
	    cin>>n>>k;
	    int a[n],c=0;
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    unordered_map<int, int> m;
	    auto it=m.begin();
	    for(i=0;i<n;i++) {
	        int x,y;
	        x=a[i]+k;
	        y=a[i]-k;
	        it=m.find(x);
	        if(it!=m.end())
	            c+=it->second;
	        it=m.find(y);
	        if(it!=m.end())
	            c+=it->second;
	        m[a[i]]++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
