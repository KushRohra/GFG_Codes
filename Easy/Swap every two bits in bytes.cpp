#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,i;
	    cin>>n;
	    string s;
	    while(n){
	        s+=to_string(n%2);
	        n/=2;
	    }
	    if(s.length()%2)
	        s+='0';
	    for(i=0;i<s.length();i=i+2) {
	        swap(s[i],s[i+1]);
	    }
	    for(i=0;i<s.length();i++) {
	        if(s[i]=='1')
	            n+=pow(2,i);
	    }
	    cout<<n<<endl;
	}
	return 0;
}
