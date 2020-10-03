#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    string s;
	    cin>>s;
	    int i=s.length()-1;
	    while(i>=0 && s[i]!='1')
	        i--;
	    for(int j=i-1;j>=0;j--) {
	        if(s[j]=='1')
	            s[j]='0';
	        else s[j]='1';
	    }
	    cout<<s<<endl;
	}
	return 0;
}
