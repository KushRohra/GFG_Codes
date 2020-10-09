#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    string s1, s2, ans="";
	    cin>>s1>>s2;
	    int i,n1=s1.length(),n2=s2.length();
	    for(i=0;i<n1;i++) {
	        if(s1.substr(i,n2)==s2) {
	            if(ans.length()==0)
	                ans+="X";
	            else if(ans.length()>0 && ans[ans.length()-1]!='X')
    	            ans+="X";
	            i+=n2-1;
	        }
	        else ans+=s1[i];
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
