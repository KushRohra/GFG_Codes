#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,i;
	cin>>n;
	int a[n],maxNo=-1;
	unordered_set<int> s;
	for(i=0;i<n;i++) {
	    cin>>a[i];
	    maxNo=max(maxNo,a[i]);
	}
	int l=1;
	s.insert(1);
	for(int i=3;i<=maxNo;i+=2) {
	    s.insert(l+i);
	    l+=i;
	}
	for(int i=0;i<n;i++) {
	    if(s.find(a[i])!=s.end()) 
	        cout<<"1";
	    else cout<<"0";
	    cout<<endl;
	}
	return 0;
}
