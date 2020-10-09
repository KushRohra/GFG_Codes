#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,i;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    i=0;
	    int j=0,maxLen=-1;
	    while(i<n) {
	        j=i+1;
	        while(j<n && a[j]>a[j-1])
	            j++;
	        maxLen=max(maxLen,j-i-1);
	        i=j;
	    }
	    cout<<maxLen<<endl;
	}
	return 0;
}
