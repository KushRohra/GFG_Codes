#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,i;
	    cin>>n;
	    string s;
	    cin>>s;
	    int a[26]={0};
	    for(i=0;i<n;i++)
	        a[s[i]-'a']++;
	    for(i=0;i<26;i++) {
	        while(a[i]) {
	            cout<<char(i+'a');
	            a[i]--;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
