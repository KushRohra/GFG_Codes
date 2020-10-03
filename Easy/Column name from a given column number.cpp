#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,x;
	    cin>>n;
	    string s="";
	    while(n) {
	        n--;
	        x=n%26;
	        n/=26;
	        s+=(x+'A');
	    }
	    reverse(s.begin(), s.end());
	    cout<<s<<endl;
	}
	return 0;
}
