#include <bits/stdc++.h>
using namespace std;
int findLength(string s) {
    int i=0,j=0,ans=0,n=s.length();
    int v[26]={0};
    for(i=0;i<n;i++) {
        if(v[s[i]-'a']==0)
            v[s[i]-'a']=1;
        else {
            while(v[s[i]-'a']==1) {
                v[s[j]-'a']--;
                j++;
            }
            v[s[i]-'a']=1;
        }
        ans=max(ans,i-j+1);
    }
    return ans;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    string s;
	    cin>>s;
	    cout<<findLength(s)<<endl;
	}
	return 0;
}
