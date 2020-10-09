#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    string ans="", temp;
    	while(n--) {
    	    cin>>temp;
    	    if(temp.length()>ans.length())
    	        ans=temp;
    	}
    	cout<<ans<<endl;
    }
	return 0;
}
