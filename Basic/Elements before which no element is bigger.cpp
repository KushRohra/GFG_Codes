#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        long long int n,i,x,max=INT_MIN,c=0;
        cin>>n;
        for(i=0;i<n;i++) {
            cin>>x;
            if(x>max) {
                max=x;
                c++;
            }
        }
        cout<<c<<endl;
    }
	return 0;
}
