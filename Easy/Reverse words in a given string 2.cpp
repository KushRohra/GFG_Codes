#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,i=0;
	    vector<string> v;
	    string s,temp="";
	    cin>>s;
	    n=s.length();
	    while(i<n) {
	        if(s[i]=='.') {
	            v.push_back(temp);
	            temp="";
	        }
	        else temp+=s[i];
	        i++;
	    }
	    v.push_back(temp);
	    n=v.size();
	    for(i=n-1;i>0;i--)
	        cout<<v[i]<<".";
	    cout<<v[0];
	    cout<<endl;
	}
	return 0;
}
