#include <bits/stdc++.h>
using namespace std;
string present(unsigned long long int a[], int n, unsigned long long int target) {
    unordered_set<unsigned long long int> s;
    int rem;
    for(int i=0;i<n;i++) {
        if(a[i]==0)
            continue;
        rem=target/a[i];
        if(s.find(rem)!=s.end() && rem*a[i]==target)
            return "Yes";
        s.insert(a[i]);
    }
    return "No";
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    unsigned long long int n,i,k;
	    cin>>n>>k;
	    unsigned long long int a[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    cout<<present(a,n,k)<<endl;
	}
	return 0;
}
