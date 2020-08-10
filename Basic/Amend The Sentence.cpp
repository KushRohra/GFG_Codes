#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    string s, ans="";
	    cin>>s;
	    int i,n=s.length();
	    ans=tolower(s[0]);
	    for(i=1;i<n;i++) {
	        if(isupper(s[i]))
	            ans+=" ";
	        ans+=tolower(s[i]);
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
