#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,i,m,k;
	    cin>>n>>m>>k;
	    int a[n],b[m];
	    unordered_set<int> s;
	    for(i=0;i<n;i++) {
	        cin>>a[i];
	        s.insert(a[i]);
	    }
	    for(i=0;i<m;i++)
	        cin>>b[i];
	    vector<pair<int, int> > v;
	    for(i=0;i<m;i++) {
	        if(s.find(k-b[i])!=s.end()) 
	            v.push_back({k-b[i], b[i]});
	    }
	    int p=v.size();
	    sort(v.begin(), v.end());
	    for(i=0;i<p-1;i++)
	        cout<<v[i].first<<" "<<v[i].second<<", ";
	    if(v.size()!=0)
    	    cout<<v[p-1].first<<" "<<v[p-1].second;
    	else cout<<"-1";
	    cout<<endl;
	}
	return 0;
}
