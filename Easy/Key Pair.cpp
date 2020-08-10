#include <bits/stdc++.h>
using namespace std;
string exist(int a[], int n, int sum) {
    unordered_set<int> s; 
    for(int i=0;i<n;i++) {
        if(s.find(sum-a[i])!=s.end())
            return "Yes";
        s.insert(a[i]);
    }
    return "No";
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,i,x;
	    cin>>n>>x;
	    int a[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    cout<<exist(a,n,x)<<endl;
	}
	return 0;
}
