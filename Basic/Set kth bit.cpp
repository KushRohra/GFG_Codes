#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,k,c=0,i=0;
	    cin>>n>>k;
	    while(n) {
	        if(i==k || n%2)
	            c+=pow(2,i);
	        n/=2;
	        i++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
