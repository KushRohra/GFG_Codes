#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,sum=0,i;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++) 
	        cin>>a[i];
	    sort(a,a+n);
	    int median=0;
	    if(n%2==0) 
	        median=(a[n/2-1]+a[n/2])/2;
	    else median=a[(n+1)/2-1];
	    cout<<median<<endl;
	}
	return 0;
}
