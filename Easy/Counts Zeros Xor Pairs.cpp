#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,i,x;
	    unordered_map<int, int> m;
	    cin>>n;
	    for(i=0;i<n;i++){
	        cin>>x;
	        m[x]++;
	    }
	    int sum=0;
	    for(auto it:m) {
	        x = it.second;
	        x *= (x - 1);
	        x /= 2;
	        sum += x;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
