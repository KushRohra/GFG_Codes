#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    string s;
	    cin>>s;
	    int i=0,f=0;
	    while(i<s.length() && s[i]=='0')
	        i++;
	    for(;i<s.length();i++) {
	        if(s[i]=='0')
	            f=1;
	    }
	    if(f)
	        cout<<"YES\n";
	    else cout<<"NO\n";
	} 
	return 0;
}
