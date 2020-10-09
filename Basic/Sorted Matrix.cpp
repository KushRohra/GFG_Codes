#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,i;
	    cin>>n;
	    vector<int> v(n*n);
	    for(i=0;i<n*n;i++) {
	        cin>>v[i];
	    }
	    sort(v.begin(), v.end());
	    for(auto ele:v) 
	        cout<<ele<<" ";
	    cout<<endl;
	}
	return 0;
}
