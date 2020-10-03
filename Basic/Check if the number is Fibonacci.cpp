#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n],i,max=INT_MIN;
	for(i=0;i<n;i++){
	    cin>>a[i];
	    if(a[i]>max)
	        max=a[i];
	}
	vector<int> dp;
	unordered_set<int> s;
	s.insert(0);
	s.insert(1);
	dp.push_back(0);
	dp.push_back(1);
	i=2;
	while(1) {
	    int x=dp[i-1]+dp[i-2];
	    i++;
	    if(x>max)
	        break;
	    dp.push_back(x);
	    s.insert(x);
	}
	for(i=0;i<n;i++) {
	    if(s.find(a[i])==s.end())
	        cout<<"No\n";
	    else cout<<"Yes\n";
	}
	return 0; 
}
