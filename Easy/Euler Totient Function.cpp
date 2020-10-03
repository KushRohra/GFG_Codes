#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,i,c=0;
        cin>>n;
        for(i=1;i<n+1;i++) {
            //cout<<i<<" "<<__gcd(i,n)<<endl;
            if(__gcd(i,n)==1)
                c++;
        }
        cout<<c<<endl;
    }
	return 0;
}
