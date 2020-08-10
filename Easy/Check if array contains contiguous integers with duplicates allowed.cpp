#include <bits/stdc++.h>
using namespace std;
string check(int a[], int n) {
    int i;
    sort(a,a+n);
    for(i=0;i<n-1;i++) {
        if(a[i+1]-a[i]>1)   
            return "No";
    }
    return "Yes";
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,i,mi;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++) 
	        cin>>a[i];
	    cout<<check(a,n)<<endl;
	}
	return 0;
}
