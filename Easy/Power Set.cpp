#include<bits/stdc++.h>
using namespace std;
void helper(string ip, string op, vector<string> &v) {
    if(ip.length()==0) {
        v.push_back(op);
        return ;
    }
    helper(ip.substr(1),op+ip[0],v);
    helper(ip.substr(1),op,v);
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    string ip,op="";
	    cin>>n>>ip;
	    vector<string> v;
	    string s=ip.substr(0,n);
	    helper(s,op,v);
	    sort(v.begin(), v.end());
	    for(int i=1;i<v.size();i++)
	        cout<<v[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
