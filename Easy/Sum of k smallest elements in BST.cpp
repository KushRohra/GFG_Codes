#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    priority_queue<int> pq;
	    int a[n], i;
	    unordered_set<int> s;
	    for(i=0;i<n;i++) 
	        cin>>a[i];
	    int k;
	    cin>>k;
	    for(i=0;i<n;i++) {
	        if(s.find(a[i])!=s.end())
	            continue;
	        s.insert(a[i]);
	        pq.push(a[i]);
	        if(pq.size()>k)
	            pq.pop();
	    }
	    int sum=0;
	    while(pq.size()>0) {
	        sum+=pq.top();
	        pq.pop();
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
