#include <bits/stdc++.h>
using namespace std;
bool check(string s1, string s2) {
    if(s1.length()!=s2.length())
        return 0;
    string s;
    for(int i=1;i<=s1.length();i++) {
        s=s1.substr(i)+s1.substr(0,i);
        if(s==s2)
            return 1;
    }
    return 0;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    string s1,s2;
	    cin>>s1>>s2;
	    cout<<check(s1,s2)<<endl;
	}
	return 0;
}
