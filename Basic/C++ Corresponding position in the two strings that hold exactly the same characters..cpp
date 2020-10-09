#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int c=0;
	    string s1,s2;
	    cin>>s1>>s2;
	    for(int i=0;i<s1.length();i++) {
	        if(tolower(s1[i])==tolower(s2[i]))
	            c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
