#include <bits/stdc++.h>
using namespace std;
string check(vector<int> v) {
    int i=0,j=v.size()-1;
    while(i<j) {
        if(v[i]!=v[j])
            return "No";
        i++;
        j--;
    }
    return "Yes";
} 
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,temp;
	    cin>>n;
	    temp=n;
	    vector<int> v;
	    while(temp) {
	        v.push_back(temp%10);
	        temp/=10;
	    }
	    cout<<check(v)<<endl;
	}
	return 0;
}
