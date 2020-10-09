#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,x,i;
        cin>>n;
        unordered_set<int> s;
        for(i=0;i<n;i++) {
            cin>>x;
            s.insert(x);
        }
        cout<<s.size()<<endl;
    }
	return 0;
}
