#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,i,j;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    i=0;
	    int maxVal=-1,sum=0;
	    while(i<n) {
	        j=i+1;
	        sum=a[i];
	        while(j<n && a[j]>a[j-1])
	            sum+=a[j++];
	        i=j;
	        maxVal=max(maxVal,sum);
	    }
	    cout<<maxVal<<endl;
	}
	return 0;
}
