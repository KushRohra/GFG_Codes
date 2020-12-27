#include <iostream>
using namespace std;
string check(int a[], int i, int j) {
    while(i<j) {
        if(a[i]!=a[j]) 
            return "NOT PERFECT";
        i++;
        j--;
    }
    return "PERFECT";
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int i,n,j;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    cout<<check(a,0,n-1)<<endl;
	}
	return 0;
}
