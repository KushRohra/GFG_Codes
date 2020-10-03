/*#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    string s;
	    cin>>s;
	    reverse(s.begin(), s.end());
	    cout<<s<<endl;
	}
	return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    string s;
	    cin>>s;
	    int i=0,j=s.length()-1;
	    while(i<j)
	        swap(s[i++],s[j--]);
	    cout<<s<<endl;
	}
	return 0;
}
