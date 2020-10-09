#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    string s;
	    cin>>s;
	    int lastIndex=-1,i;
	    for(i=0;i<s.length();i++) {
	        if(s[i]=='1')
	            lastIndex=i;
	    }
	    cout<<lastIndex<<endl;
	}
	return 0;
}
