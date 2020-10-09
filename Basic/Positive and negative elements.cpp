#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int x,i,n;
	    cin>>n;
	    vector<int> pos,neg;
	    for(i=0;i<n;i++) {
	        cin>>x;
	        if(x<0) 
	            neg.push_back(x);
	        else pos.push_back(x);
	    }
	    for(i=0;i<pos.size();i++)
	        cout<<pos[i]<<" "<<neg[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
