#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int a[n][n],i,j;
	    for(i=0;i<n;i++)
	        for(j=0;j<n;j++)
	            cin>>a[i][j];
	    for(i=0;i<n;i++)
	        for(j=i;j<n;j++)
	            swap(a[i][j], a[j][i]);
	    for(i=0;i<n;i++)
	        for(j=0;j<n/2;j++)
	            swap(a[i][j],a[i][n-j-1]);
	    for(i=0;i<n;i++)
	        for(j=0;j<n;j++)
	            cout<<a[i][j]<<" ";
	    cout<<endl;
	}
	return 0;
}
