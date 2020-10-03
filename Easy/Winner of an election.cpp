#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    map<string, int> m;
	    int n,i;
	    cin>>n;
	    string s;
	    for(i=0;i<n;i++) {
	        cin>>s;
	        m[s]++;
	    }
	    string ans="";
	    int max=INT_MIN;
	    for(auto it=m.begin();it!=m.end();it++) {
	        if(it->second>max) {
	            max=it->second;
	            ans=it->first;
	        }
	    }
	    cout<<ans<<" "<<max<<endl;
	}
 	return 0;
}
