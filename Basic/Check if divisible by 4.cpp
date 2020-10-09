#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    string s;
	    cin>>s;
	    int sum=0,n=s.length();
	    sum=(s[n-2]-'0')*10+(s[n-1]-'0');
	    if(sum%4==0)
	        cout<<"1\n";
	    else cout<<"0\n";
	}
	return 0;
}
