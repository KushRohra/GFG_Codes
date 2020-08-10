#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int i,x;
        set<int> pos, neg;
	    for(i=0;i<n;i++) {
	        cin>>x;
	        if(x<0) 
	            neg.insert(x);
	        else pos.insert(x);
	    }
	    vector<pair<int, int>> sol;
	    bool f=0;
	    for(auto it=neg.begin();it!=neg.end();it++) {
	        int x=*it;
            int y=-x;
	        if(pos.find(y)!=pos.end()) {
	            sol.push_back({x,y});
	            f=1;
	        }
	    }
	    if(f==0)
	        cout<<"0";
	    else {
	        reverse(sol.begin(), sol.end());
	        for(i=0;i<sol.size();i++) 
	            cout<<sol[i].first<<" "<<sol[i].second<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
