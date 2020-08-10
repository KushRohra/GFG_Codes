#include <bits/stdc++.h>
using namespace std;
bool find(string s, int n) {
    unordered_map<char, int> m;
    for(int i=0;i<n;i++)
        m[s[i]]++;
    bool evenFound=false;
    for(auto it=m.begin();it!=m.end();it++)
        if(it->second%2)
            if(!evenFound)
                evenFound=1;
            else return 0;
    return 1;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    string s;
	    cin>>s;
	    n=s.length();
	    if(find(s,n))
	        cout<<"Yes\n";
	    else cout<<"No\n";
	}
	return 0;
}
