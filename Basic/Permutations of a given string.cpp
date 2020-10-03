#include <bits/stdc++.h>
using namespace std;
vector<string> v;
void permute(string s, int l, int r) {
    if(l==r) 
        v.push_back(s);
    else {
        for(int i=l;i<=r;i++) {
            swap(s[l],s[i]);
            permute(s,l+1,r);
            swap(s[l],s[i]);
        }
    }
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    string s;
	    v.clear();
	    cin>>s;
	    permute(s,0,s.length()-1);
	    sort(v.begin(),v.end());
	    for(auto s:v)
	        cout<<s<<" ";
	    cout<<endl;
	}
	return 0;
}

