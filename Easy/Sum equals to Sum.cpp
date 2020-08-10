#include<bits/stdc++.h>
using namespace std;
bool find(int a[], int n) {
    unordered_set<int> s;
    int i, j;
    for(i=0;i<n;i++)
	   for(j=i+1;j<n;j++)
	       if(s.find(a[i]+a[j])==s.end())   
	            s.insert(a[i]+a[j]);
	       else return 1;
	return 0;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,i;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
        cout<<find(a,n)<<endl;	   
	}
	return 0;
}
