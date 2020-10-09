#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t-- ){
	    string s;
	    getline(cin,s);
	    s+=" ";
	    string temp="";
	    for(int i=0;i<s.length();i++) {
	        if(s[i]==' ') {
	            cout<<temp.length()<<" ";
	            temp="";
	        }
	        else temp+=s[i];
	    }
	    cout<<endl;
	}
	return 0;
}
