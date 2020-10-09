#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    string s;
	    cin>>s;
	    int c=0,i,n=s.length();
	    for(i=0;i<n;i++) {
	        if((i+1)%2==0 && s[i]=='R')
	            c++;
	        if((i+1)%2==1 && s[i]=='B')
	            c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
