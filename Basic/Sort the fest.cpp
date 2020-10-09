#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int i;
	    string s;
	    unordered_set<string> Set; 
	    for(i=0;i<5;i++) {
	        cin>>s;
	        Set.insert(s);
	    }
	    int f=0;
	    for(i=0;i<5;i++) {
	        cin>>s;
	        if(Set.find(s)!=Set.end())
	            f=1;
	    }
	    if(f==1)
	        cout<<"CHANGE"<<endl;
	    else cout<<"BEHAPPY"<<endl;
	}
	return 0;
}
