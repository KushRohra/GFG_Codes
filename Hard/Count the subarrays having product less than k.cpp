#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    long long int pro=1,n,k,i,total=0,x;
	    cin>>n>>k;
	    int a[n];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    int curr=0, prev=0;
	    for(;curr<n;curr++) {
	        pro*=a[curr];
	        while(prev<curr && pro>=k)
	        	pro/=a[prev++];
	        if(pro<k)
	        	total+=(curr-prev)+1;
	    }
	    cout<<total<<endl;
	}
	return 0;
}
