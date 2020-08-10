#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    string s;
	    cin>>s;
	    vector<bool> v(26,0);
	    int pos,ans=0,i=0,j=0,n=s.length();
	    while(i<n) {
	        pos=s[i]-'a';
	        if(v[pos]==0)
	            v[pos]=1;
	        else {
	            while(v[pos]==1) {
	                v[s[j]-'a']=0;
	                j++;
	            }
	            v[pos]=1;
	        }
	        i++;
	        if(i-j>ans)
	            ans=i-j;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
