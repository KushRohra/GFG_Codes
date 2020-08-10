#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    string s;
	    cin>>s;
	    int n=s.length(), i;
	    vector<char> v;
	    for(i=0;i<n;i++) {
	        if(s[i]=='b')
	            continue;
	        else if(s[i]=='a') {
	            if(i+1<n && s[i+1]=='c')
	                i++;
	            else v.push_back(s[i]);
	        }
	        else v.push_back(s[i]);
	    }
	    s="";
	    for(i=0;i<v.size();i++)
	        s+=v[i];
	    cout<<s<<endl;
	}
	return 0;
}
