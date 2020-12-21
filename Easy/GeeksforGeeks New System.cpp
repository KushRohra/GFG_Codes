#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    unordered_map<string, int> m;
	    int n;
	    cin>>n;
	    string s;
	    while(n--) {
	        cin>>s;
	        if(m.find(s)==m.end()) {
	            cout<<"Verified ";
	            m[s] = 1;
	        }
	        else {
	            string temp = s + to_string(m[s]);
	            cout<<temp<<" ";
	            m[s]++;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}